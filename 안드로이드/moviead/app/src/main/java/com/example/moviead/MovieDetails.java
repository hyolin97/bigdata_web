package com.example.moviead;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.Spinner;
import android.widget.TextView;

public class MovieDetails extends Activity {

    Spinner spinner;
    TextView textView1, textView2, textView3;
    ImageView imageView, imageView2, imageView3;
    Button btn;

    int index;

    String title[] = new String[7];
    String img_url[] = new String[7];
    String m_percent[] = new String[7];
    String m_rate[] = new String[7];
    String plot[] = new String[7];
    String spec[] = new String[7];
    String info[] = new String[7];
    String still_cut[] = new String[14];

    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.movie_details);

        PlayVideo playVideo = new PlayVideo();
        Intent intent1 = new Intent(MovieDetails.this, PlayVideo.class);
        startActivityForResult(intent1, 1);

        final Intent intent = getIntent();
        index = intent.getIntExtra("index", 0);
        title = intent.getStringArrayExtra("title");
        img_url = intent.getStringArrayExtra("img_url");
        m_percent = intent.getStringArrayExtra("m_percent");
        m_rate = intent.getStringArrayExtra("m_rate");
        plot = intent.getStringArrayExtra("plot");
        spec = intent.getStringArrayExtra("spec");
        info = intent.getStringArrayExtra("info");
        still_cut = intent.getStringArrayExtra("still_cut");

        textView1 = findViewById(R.id.textView6);
        textView2 = findViewById(R.id.textView8);
        textView3 = findViewById(R.id.textView7);
        imageView = findViewById(R.id.imageView2);
        imageView2 = findViewById(R.id.imageView3);
        imageView3 = findViewById(R.id.imageView4);

        btn = findViewById(R.id.button2);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                final int i = index;
                Intent intent1 = new Intent(getApplicationContext(), SelectSeat.class);
                intent1.putExtra("title", title[i]);
                startActivityForResult(intent1, 1);

                setResult(RESULT_OK, intent);
                finish();
            }
        });

        setItem(index);

        String[] spinner_array = new String[8];
        spinner_array[0] = "Choose Movie";

        for(int i = 0; i < 7 ; i++) {
            spinner_array[i+1] = title[i];
        }
        spinner = findViewById(R.id.spinner);
        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this,
                android.R.layout.simple_spinner_dropdown_item, spinner_array);
        // ArrayAdapter adapter = ArrayAdapter.createFromResource(this, R.array.m_title_array, R.layout.support_simple_spinner_dropdown_item);
        adapter.setDropDownViewResource(R.layout.support_simple_spinner_dropdown_item);
        spinner.setAdapter(adapter);
        spinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> adapterView, View view, int i, long l) {
                if (adapterView.getItemAtPosition(i).equals("Choose Movie")) { }
                else{ setItem(i-1); index = i-1; }
            }
            @Override
            public void onNothingSelected(AdapterView<?> adapterView) {

            }
        });
    }

    public void setItem(int index) {
        textView1.setText(title[index]);
        textView2.setText("| " + spec[index] + "\n| " + info[index]);
        textView3.setText(plot[index]);
        new DownloadImageTask(imageView).execute(img_url[index]);
        new DownloadImageTask(imageView2).execute(still_cut[index*2]);
        new DownloadImageTask(imageView3).execute(still_cut[index*2+1]);
    }
}