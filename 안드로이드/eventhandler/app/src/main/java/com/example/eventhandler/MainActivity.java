package com.example.eventhandler;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        final Button btnCall=(Button)findViewById(R.id.button01);
        btnCall.setOnClickListener(new View.OnClickListener(){
            public void onClick(View v){
                final EditText objET=(EditText) findViewById(R.id.editText01);
                objET.setText("통화중....");
            }
        });
        final Button btnStop=(Button)findViewById(R.id.button02);
        btnStop.setOnClickListener(new View.OnClickListener(){
            public void onClick(View v){
                final EditText objET=(EditText) findViewById(R.id.editText01);
                objET.setText("종료합니다");
                finish();
            }
        });

    }
}
