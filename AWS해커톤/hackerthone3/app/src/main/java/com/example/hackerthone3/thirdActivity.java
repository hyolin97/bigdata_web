package com.example.hackerthone3;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.Button;

public class thirdActivity extends AppCompatActivity {
    private Button btnShowLocation,btnShowLocation1,btnShowLocation2,btnShowLocation3;


    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.fourth);
        btnShowLocation = (Button) findViewById(R.id.button);
        btnShowLocation1 = (Button) findViewById(R.id.button1);
        btnShowLocation2 = (Button) findViewById(R.id.button2);
        btnShowLocation3 = (Button) findViewById(R.id.button3);
        //Intent Intent=new Intent(thirdActivity.this, sixth.class);
        //startActivity(Intent);


    }}
