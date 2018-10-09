package com.example.intentlogin_1;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private EditText edit_id;
    private EditText edit_pw;
    Bundle extras=new Bundle();
    Bundle extras1=new Bundle();
    String idtext;
    String pwtext;
    String idtext2;
    String pwtext2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        edit_id=(EditText)findViewById(R.id.ID);
        edit_pw=(EditText)findViewById(R.id.PW);
        Button btn=(Button)findViewById(R.id.LOGIN);
        Button btn2=(Button)findViewById(R.id.ADD);

        btn.setOnClickListener(new View.OnClickListener(){
            public void onClick(View v){
                idtext=edit_id.getText().toString();
                pwtext=edit_pw.getText().toString();
                Intent intent =new Intent(MainActivity.this, NextActivity.class);
                extras.putInt("test",1);
                extras.putString("lecture","로그인되었습니다!");
                extras.putString("id",idtext);
                extras.putString("pw",pwtext);
                intent.putExtras(extras);
                startActivity(intent);

            }
        });
        btn2.setOnClickListener(new View.OnClickListener(){
            public void onClick(View v){

                idtext2=edit_id.getText().toString();
                pwtext2=edit_pw.getText().toString();
                Intent intent =new Intent(MainActivity.this, NextActivity.class);

                extras1.putInt("test",2);
                extras1.putString("lecture"," 로그인 변경되었습니다!");
                extras1.putString("id",idtext2);
                extras1.putString("pw",pwtext2);

                intent.putExtras(extras1);
                startActivity(intent);



            }
        });


    }
}
