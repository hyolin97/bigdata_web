package com.example.intentlogin_1;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class NextActivity extends Activity {
    protected void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.next);
        Button changebtn = (Button)findViewById(R.id.ChangeButton);

        TextView result=(TextView)findViewById(R.id.result);
        Bundle extras=getIntent().getExtras();
        result.setText(
                extras.getInt("test")+"  "+extras.getString("lecture")+
                        "\n"+"id="+extras.getString("id")+"\n"+"pw="+extras.getString("pw")

        );
        changebtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(NextActivity.this, MainActivity.class);

                startActivity(intent);
            }
        });

    }

}
