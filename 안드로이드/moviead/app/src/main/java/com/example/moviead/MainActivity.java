package com.example.moviead;

import android.Manifest;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Color;
import android.net.Uri;
import android.os.AsyncTask;
import android.provider.DocumentsContract;
import android.support.constraint.ConstraintLayout;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.method.ScrollingMovementMethod;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.select.Elements;

import java.io.IOException;

public class MainActivity extends AppCompatActivity {

    ConstraintLayout layout;
    LinearLayout posterView, linearLayout;
    TextView txtView, loading;
    Button btn;
    ImageView poster;

    String title[] = new String[7];
    String img_url[] = new String[7];
    String m_percent[] = new String[7];
    String m_rate[] = new String[7];
    String plot[] = new String[7];
    String spec[] = new String[7];
    String info[] = new String[7];
    //String stillcut[][] = new String[7][2];
    String still_cut[] = new String[14];

    String next[] = new String[7];
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        CheckDangerousPermissions();

        Crawling crawling = new Crawling();
        crawling.execute();

        posterView = findViewById(R.id.posterView);
        posterView.setVisibility(View.INVISIBLE);
        txtView = findViewById(R.id.textView5);
        txtView.setVisibility(View.INVISIBLE);

        btn = findViewById(R.id.button);
        btn.setVisibility(View.INVISIBLE);

        poster = findViewById(R.id.poster);
        poster.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                posterView.setVisibility(View.INVISIBLE);
                txtView.setVisibility(View.INVISIBLE);
                btn.setVisibility(View.INVISIBLE);
                poster.setVisibility(View.INVISIBLE);
                poster.setImageIcon(null);
            }
        });


        layout = findViewById(R.id.layout1);

        loading = new TextView(this);
        loading.setText("로딩중");
        loading.setTextSize(30);
        loading.setTextColor(getResources().getColor(R.color.colorLighGray));
        layout.addView(loading);

    }

    // 클릭 이벤트
    public void onClick(View v, int i) {
        final int index = i;
        posterView.setVisibility(View.VISIBLE);
        poster.setVisibility(View.VISIBLE);
        txtView.setVisibility(View.VISIBLE);
        btn.setVisibility(View.VISIBLE);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(getApplicationContext(), MovieDetails.class);
                intent.putExtra("index", index);
                intent.putExtra("title", title);
                intent.putExtra("img_url", img_url);
                intent.putExtra("m_percent", m_percent);
                intent.putExtra("m_rate", m_rate);
                intent.putExtra("plot", plot);
                intent.putExtra("spec", spec);
                intent.putExtra("info", info);
                intent.putExtra("still_cut", still_cut);

                startActivityForResult(intent, 1);
            }
        });

        txtView.setText(plot[i]);
        txtView.setMovementMethod(new ScrollingMovementMethod());
        poster.setScaleType(ImageView.ScaleType.FIT_CENTER);
        new DownloadImageTask(poster)
                .execute(img_url[i]);

    }

    private class Crawling extends AsyncTask<Void, Void, Void> {

        @Override
        protected void onPreExecute() {
            super.onPreExecute();
        }

        @Override
        protected Void doInBackground(Void... params) {
            try {
                Document doc = Jsoup.connect("http://www.cgv.co.kr/movies/").get();
                Elements datas, img, percent, links;

                // 제목 불러오기
                datas = doc.getElementsByClass("title");
                // 포스터 이미지 소스 불러오기
                img = doc.getElementsByTag("img");
                // 예매율, 평점
                percent = doc.getElementsByClass("percent");
                // 상세 페이지
                links = doc.getElementsByAttributeValueContaining("href", "/movies/detail-view/");

                for(int i = 0 ; i < 7 ; i++) {
                    title[i] = datas.get(i).text();

                    String str[] = img.get(i + 8).toString().split("\"");
                    img_url[i] = str[1];

                    m_percent[i] = percent.get(i * 2).text();
                    m_rate[i] = percent.get(i * 2 + 1).text();

                    str = links.get(i * 2 + 1).toString().split("\"");
                    next[i] = "http://www.cgv.co.kr" + str[1];

                }

                // 상세 정보 페이지에서 줄거리, 기본 정보 가져옴
                for(int i = 0 ; i < 7 ; i++) {
                    Document doc1 = Jsoup.connect(next[i]).get();
                    Elements plots, specs, still;
                    plots = doc1.getElementsByClass("sect-story-movie");
                    plot[i] = plots.get(0).text();

                    specs = doc1.getElementsByClass("spec");
                    String str[] = specs.get(0).text().split("장르");
                    spec[i] = str[0];
                    info[i] =  "장르 " + str[1];

                    still = doc1.getElementsByTag("img");
                    str = still.get(13).toString().split("\"");
                    still_cut[i*2] = str[1];
                    str = still.get(14).toString().split("\"");
                    still_cut[i*2+1] = str[1];
                }

            } catch (IOException e) {
                e.printStackTrace();
            }
            return null;
        }

        @Override
        protected void onPostExecute(Void result) {

            linearLayout = findViewById(R.id.linearLayout1);
            loading.setVisibility(View.INVISIBLE);

            TextView tv = new TextView(MainActivity.this);
            linearLayout.addView(tv);
            LinearLayout.LayoutParams marginControl1 = (LinearLayout.LayoutParams)tv.getLayoutParams();
            marginControl1.leftMargin=20;
            marginControl1.rightMargin=20;
            marginControl1.topMargin=20;
            tv.setLayoutParams(marginControl1);
            tv.setBackground(getResources().getDrawable(R.drawable.layoutstyle_red));
            tv.setText("실시간 인기 순위");
            tv.setTextSize(30);
            tv.setTextColor(Color.WHITE);
            tv.setGravity(Gravity.CENTER);

            MovieListView mv[] = new MovieListView[7];
            for(int i = 0; i < 7 ; i++) {
                // 영화 리스트 항목을 만듦
                final int index = i;
                mv[index] = new MovieListView(MainActivity.this);
                linearLayout.addView(mv[index]);

                MovieListView.LayoutParams marginControl = (MovieListView.LayoutParams)mv[index].getLayoutParams();
                marginControl.topMargin=20;
                marginControl.leftMargin=20;
                marginControl.rightMargin=20;
                mv[index].setLayoutParams(marginControl);

                // 순위, 제목, 정보 설정
                TextView tv1 = mv[index].findViewById(R.id.textView);
                tv1.setText(String.valueOf(index+1));

                ImageView iv = mv[index].findViewById(R.id.imageView);
                new DownloadImageTask(iv).execute(img_url[index]);

                TextView tv2 = mv[index].findViewById(R.id.textView2);
                tv2.setText(title[index]);

                TextView tv3 = mv[index].findViewById(R.id.textView3);
                tv3.setText("| " + m_percent[index] + "\n| 평점" + m_rate[index]);

                // 리스트 클릭 시 이미지 크게 띄어줌
                mv[i].setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View view) {
                        MainActivity.this.onClick(view, index);
                    }
                });
            }
        }
    }

    private void CheckDangerousPermissions() {
        String[] permissions = {
                Manifest.permission.READ_EXTERNAL_STORAGE,
        };

        int permissionCheck = PackageManager.PERMISSION_GRANTED;
        for(int i = 0 ; i < permissions.length; i++) {
            permissionCheck = ContextCompat.checkSelfPermission(this, permissions[i]);
            if(permissionCheck == PackageManager.PERMISSION_DENIED){
                break;
            }
        }

        if(permissionCheck == PackageManager.PERMISSION_GRANTED) {
            Toast.makeText(this, "권한 있음", Toast.LENGTH_LONG).show();
        } else {
            Toast.makeText(this, "권한 없음", Toast.LENGTH_LONG).show();

            if(ActivityCompat.shouldShowRequestPermissionRationale(this, permissions[0])) {
                Toast.makeText(this, "권한 설명 필요함", Toast.LENGTH_LONG).show();
            } else {
                ActivityCompat.requestPermissions(this, permissions, 1);
            }
        }
    }
}
