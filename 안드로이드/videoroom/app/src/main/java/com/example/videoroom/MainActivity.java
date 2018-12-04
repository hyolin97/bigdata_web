package com.example.videoroom;

import android.Manifest;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.KeyEvent;
import android.view.View;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {




    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        setTitle("My Video");

        ImageButton videoListBtn = (ImageButton)findViewById(R.id.videoViewBtn);
        ImageButton VideoRecordBtn = (ImageButton)findViewById(R.id.takevideoBtn);
        ImageButton VideoRecordBtn2 = (ImageButton)findViewById(R.id.videoViewBtn2);

        videoListBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this,VideoListActivity.class);
                startActivity(intent);

            }
        });

        VideoRecordBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this,VideoRecActivity.class);
                startActivity(intent);

            }
        });
        VideoRecordBtn2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this,YoutubeActivity.class);
                startActivity(intent);

            }
        });


        checkDangerousPermissions();




    }
    private void checkDangerousPermissions(){
        String[] permissions ={
                Manifest.permission.READ_EXTERNAL_STORAGE,
                Manifest.permission.WRITE_EXTERNAL_STORAGE,
                Manifest.permission.CAMERA,
                Manifest.permission.RECORD_AUDIO,
                Manifest.permission.INTERNET,
                Manifest.permission.WAKE_LOCK
        };

        int permissonCheck = PackageManager.PERMISSION_GRANTED;
        for (int i = 0; i < permissions.length; i++) {
            permissonCheck = ContextCompat.checkSelfPermission(this, permissions[i]);
            if (permissonCheck == PackageManager.PERMISSION_DENIED)
                break;
        }

        if (permissonCheck == PackageManager.PERMISSION_GRANTED) {

            Toast.makeText(this, "권한있음", Toast.LENGTH_LONG).show();
        } else {
            Toast.makeText(this, "권한없음", Toast.LENGTH_LONG).show();
            if (ActivityCompat.shouldShowRequestPermissionRationale(this, permissions[0])) {
                Toast.makeText(this, "권한 설명 필요함", Toast.LENGTH_LONG).show();

            } else {
                ActivityCompat.requestPermissions(this, permissions, 1);
            }
        }

    }




}
