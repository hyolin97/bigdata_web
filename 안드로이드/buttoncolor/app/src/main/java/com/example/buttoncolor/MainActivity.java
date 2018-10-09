package com.example.buttoncolor;

import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private int color1 = 0xFFE1C5C5;
    private int color2 = 0xFFDFCACA;
    private int color3 = 0xFFE1D3D3;
    private int color4 = 0xFFD2D8D7;
    private int color5 = 0xFFC9DBDA;


    private String StrData;


    int count = 0;
    //num은 1을 5로 나누었을때의 나머지이다. 총 5개의 화면 색이 있기 때문에 5로 나눈 나머지어야 한다.
    int num;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        final Button btn = (Button)findViewById(R.id.Button1);
        final LinearLayout bgColor = (LinearLayout)findViewById(R.id.LinearLayout1);
        final TextView txt = (TextView)findViewById(R.id.TextView1);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                num = count % 5;

                //switch문을 사용해 나머지가 0,1,2,3,4일 경우로 나누어 화면 색이 바뀌고, 색에 대한 정보가 화면에 표시되도록 한다.
                switch(num) {
                    case 0:
                        bgColor.setBackgroundColor(color1);
                        StrData = "핑크색";
                        txt.setText(StrData);
                        break;

                    case 1:
                        bgColor.setBackgroundColor(color2);
                        StrData = "연핑크색";
                        txt.setText(StrData);
                        break;

                    case 2:
                        bgColor.setBackgroundColor(color3);
                        StrData = "흰색";
                        txt.setText(StrData);
                        break;

                    case 3:
                        bgColor.setBackgroundColor(color4);
                        StrData = "민트색";
                        txt.setText(StrData);
                        break;

                    case 4:
                        bgColor.setBackgroundColor(color5);
                        StrData = "녹색";
                        txt.setText(StrData);
                        break;
                }
                txt.setTextColor(Color.BLACK);
                count = count + 1; //버튼이 눌릴때마다 count변수는 1씩 증가한다.
            }
        });
    }
}
