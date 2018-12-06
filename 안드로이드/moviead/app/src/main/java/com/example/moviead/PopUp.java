package com.example.moviead;
import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.MotionEvent;
import android.view.View;
import android.widget.TextView;

public class PopUp extends Activity {
    TextView textView;

    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.popup);

        textView = findViewById(R.id.textView1);

        Intent intent = getIntent();
        if(intent.getStringExtra("CIID")!=null) textView.setText("접속완료");
        else textView.setText("예매 완료");
    }

    public void onClose(View v){

        Intent intent = new Intent();
        intent.putExtra("result", "Close Popup");
        setResult(RESULT_OK, intent);

        Intent intent1 = new Intent(getApplicationContext(), MainActivity.class);
        intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
        startActivityForResult(intent1, 1);
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

