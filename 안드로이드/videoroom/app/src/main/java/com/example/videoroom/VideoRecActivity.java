package com.example.videoroom;

import android.Manifest;
import android.app.Activity;
import android.content.ContentValues;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.hardware.Camera;
import android.hardware.camera2.CameraCharacteristics;
import android.hardware.camera2.CameraDevice;
import android.hardware.camera2.CameraManager;
import android.media.MediaPlayer;
import android.media.MediaRecorder;
import android.net.Uri;
import android.os.Bundle;
import android.os.Environment;
import android.os.PersistableBundle;
import android.provider.MediaStore;
import android.support.annotation.Nullable;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.ContextMenu;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.Toast;

import java.io.IOException;

public class VideoRecActivity extends AppCompatActivity {

    private static String TAG;
    private static String EXTERNAL_STORAGE_PATH = "";
    private static String RECORDED_FILE = "video_recorded";
    private static String filename = "";

    MediaPlayer player;
    MediaRecorder recorder;

    private Camera camera = null;
    SurfaceHolder holder;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_videorecord);


        //외장메모리 있는지 확인
        String state = Environment.getExternalStorageState();

        if (!state.equals(Environment.MEDIA_MOUNTED)) {
            Toast.makeText(getApplicationContext(), "외장 메모리가 마운트되지 않았습니다.", Toast.LENGTH_LONG).show();

        } else {
            EXTERNAL_STORAGE_PATH = Environment.getExternalStorageDirectory().getAbsolutePath()+"/DCIM/Camera";
        }

        SurfaceView surfaceView = (SurfaceView) findViewById(R.id.surface);
        holder = surfaceView.getHolder();
        holder.setType(SurfaceHolder.SURFACE_TYPE_PUSH_BUFFERS);

        final Button recordBtn = (Button) findViewById(R.id.recordBtn);
        Button recordStopBtn = (Button) findViewById(R.id.recordStopBtn);
        final Button playBtn = (Button) findViewById(R.id.playBtn);
        Button playStopBtn = (Button) findViewById(R.id.playStopBtn);

        recordBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                View dialogView =(View)View.inflate(VideoRecActivity.this, R.layout.dialog, null);
                AlertDialog.Builder aDialog = new AlertDialog.Builder(VideoRecActivity.this);
                aDialog.setTitle("파일 이름 설정");

                final EditText filename_et = (EditText)dialogView.findViewById(R.id.editText);

                aDialog.setView(dialogView);
                aDialog.setNegativeButton("취소", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {

                    }
                });
                aDialog.setPositiveButton("확인", new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface dialog, int which) {

                        RECORDED_FILE=filename_et.getText().toString();
//                        Toast.makeText(getApplicationContext(),RECORDED_FILE,Toast.LENGTH_LONG).show();

                        try {
                            if (recorder == null)
                                recorder = new MediaRecorder();


                            recorder.setAudioSource(MediaRecorder.AudioSource.MIC);
                            recorder.setVideoSource(MediaRecorder.VideoSource.CAMERA);
                            recorder.setOutputFormat(MediaRecorder.OutputFormat.MPEG_4);
                            recorder.setAudioEncoder(MediaRecorder.AudioEncoder.DEFAULT);
                            recorder.setVideoEncoder(MediaRecorder.VideoEncoder.DEFAULT);

                            filename = createFilename();
                            Log.d(TAG, "current filename: " + filename);
                            recorder.setOutputFile(filename);
                            recorder.setPreviewDisplay(holder.getSurface());
                            recorder.setOrientationHint(90);
                            recorder.prepare();
                            recorder.start();
                        } catch (IOException e) {
                            Log.e(TAG, "Exception : " + e);
                            recorder.release();
                            recorder = null;

                        }


                    }
                });

                aDialog.show();


            }
        });

        recordStopBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (recorder == null)
                    return;

                recorder.stop();
                recorder.reset();
                recorder.release();
                recorder = null;

                ContentValues values = new ContentValues(10);

                values.put(MediaStore.MediaColumns.TITLE, "RecordedVideo");
                values.put(MediaStore.Audio.Media.ALBUM, "Video Album");
                values.put(MediaStore.Audio.Media.ARTIST, "Mike");
                values.put(MediaStore.Audio.Media.DISPLAY_NAME, "Recorded Video");
                values.put(MediaStore.MediaColumns.DATE_ADDED, System.currentTimeMillis() / 1000);
                values.put(MediaStore.MediaColumns.MIME_TYPE, "video/mp4");
                values.put(MediaStore.Audio.Media.DATA, filename);

                Uri videoUri = getContentResolver().insert(MediaStore.Video.Media.EXTERNAL_CONTENT_URI, values);
                if (videoUri == null) {
                    Log.d("SampleVideoRecorder", "Video insert failed");
                    return;
                }
                sendBroadcast(new Intent(Intent.ACTION_MEDIA_SCANNER_SCAN_FILE, videoUri));


            }
        });

        playBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (player == null) {
                    player = new MediaPlayer();

                }
                try {
                    player.setDataSource(filename);
                    player.setDisplay(holder);

                    player.prepare();
                    player.start();
                } catch (IOException e) {
                    Log.e(TAG, "Video play failed", e);

                }
            }
        });
        playStopBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (player == null) return;

                player.stop();

                player.release();
                player = null;
            }
        });


    }



    private String createFilename() {

        String newFilename = "";
        if (EXTERNAL_STORAGE_PATH == null || EXTERNAL_STORAGE_PATH.equals("")) {
            newFilename = RECORDED_FILE  + ".mp4";

        } else {
            newFilename = EXTERNAL_STORAGE_PATH + "/" + RECORDED_FILE  + ".mp4";

        }

        return newFilename;
    }


}


