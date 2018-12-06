package com.example.moviead;
import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Environment;
import android.view.MotionEvent;
import android.view.View;
import android.widget.MediaController;
import android.widget.VideoView;

public class PlayVideo extends Activity {
    public void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);
        setContentView(R.layout.play);

        VideoView videoView = findViewById(R.id.videoView);
        MediaController mediaController = new MediaController(this);

        String path = Environment.getExternalStorageDirectory().getAbsolutePath();

        videoView.setVideoPath(path +"/VideoDownloader/Download/video1.mp4");
        videoView.setMediaController(mediaController);
        mediaController.show(0);
        videoView.requestFocus();
        videoView.start();

    }

    public void onClose(View v){

        Intent intent = new Intent();
        intent.putExtra("result", "Close Popup");
        setResult(RESULT_OK, intent);

        intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
        finish();
    }

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        if(event.getAction()==MotionEvent.ACTION_OUTSIDE){
            return false;
        }
        return true;
    }

    @Override
    public void onBackPressed() {
        return;
    }
}
