package com.example.hackerthone3;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.Button;

public class fourth extends AppCompatActivity {
    private Button btnShowLocation,btnShowLocation1,btnShowLocation2,btnShowLocation3;


    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.fifth);
        btnShowLocation = (Button) findViewById(R.id.btn1);
        btnShowLocation.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent Intent=new Intent(fourth.this,Activity_4_8_1.class);
                startActivity(Intent);
            }
        });
        btnShowLocation1 = (Button) findViewById(R.id.btn2);
        btnShowLocation1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent Intent=new Intent(fourth.this,Activity_4_8_2.class);
                startActivity(Intent);
            }
        });
        btnShowLocation2 = (Button) findViewById(R.id.btn3);
        btnShowLocation2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent Intent=new Intent(fourth.this,Activity_4_8_3.class);
                startActivity(Intent);
            }
        });
        btnShowLocation3 = (Button) findViewById(R.id.btn4);
        btnShowLocation3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent Intent=new Intent(fourth.this,Activity_4_8_4.class);
                startActivity(Intent);
            }
        });



    }
}
