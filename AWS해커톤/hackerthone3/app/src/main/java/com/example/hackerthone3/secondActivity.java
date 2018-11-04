package com.example.hackerthone3;

import android.Manifest;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

public class secondActivity extends AppCompatActivity {


    private Button btnShowLocation, btnShowLocation1, btnShowLocation2, btnShowLocation3, btnShowLocation4;
    private TextView txtLat;
    private TextView txtLon;
    private final int PERMISSIONS_ACCESS_FINE_LOCATION = 1000;
    private final int PERMISSIONS_ACCESS_COARSE_LOCATION = 1001;
    private boolean isAccessFineLocation = false;
    private boolean isAccessCoarseLocation = false;
    private boolean isPermission = false;

    // GPSTracker class
    private GpsInfo gps;

           protected void onCreate(Bundle savedInstanceState) {
            super.onCreate(savedInstanceState);
            setContentView(R.layout.third);
            btnShowLocation = (Button) findViewById(R.id.button);
            btnShowLocation1 = (Button) findViewById(R.id.button1);
            btnShowLocation2 = (Button) findViewById(R.id.button2);
            btnShowLocation3 = (Button) findViewById(R.id.button3);
            //Intent Intent=new Intent(secondActivity.this, sixth.class);
            //startActivity(Intent);

        }

}

