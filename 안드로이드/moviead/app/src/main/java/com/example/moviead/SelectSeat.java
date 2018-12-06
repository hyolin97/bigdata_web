package com.example.moviead;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

public class SelectSeat extends Activity {

    View view[] = new View[13];
    LinearLayout linearLayout4;
    TextView textView;
    Button btn;

    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.select_seat);

        Intent intent = getIntent();
        String str = intent.getStringExtra("title");

        textView = findViewById(R.id.textView1);
        textView.setText("< " + str + " >");
        linearLayout4 = findViewById(R.id.linearLayout4);
        for (int i = 0 ; i < linearLayout4.getChildCount() ; i++) {
            view[i] = (View) linearLayout4.getChildAt(i);
        }

        btn = findViewById(R.id.button);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(getApplicationContext(), PopUp.class);
                startActivityForResult(intent, 1);
            }
        });
    }
}
