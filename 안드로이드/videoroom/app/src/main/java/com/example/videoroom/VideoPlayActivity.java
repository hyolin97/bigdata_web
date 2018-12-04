package com.example.videoroom;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.media.ThumbnailUtils;
import android.os.Bundle;
import android.os.Environment;
import android.provider.MediaStore;
import android.support.annotation.Nullable;
import android.util.Log;
import android.widget.MediaController;
import android.widget.VideoView;

public class VideoPlayActivity extends Activity {
    String filename;
    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_videoplay);
        VideoView vv = (VideoView)findViewById(R.id.videoview);


        filename =getIntent().getStringExtra("filename");
        String filepath = Environment.getExternalStorageDirectory().getAbsolutePath()+"/DCIM/Camera/"+filename;
        vv.setVideoPath(filepath);

        MediaController mediaController = new MediaController(this);
        vv.setMediaController(mediaController);


        vv.start();


    }
}

