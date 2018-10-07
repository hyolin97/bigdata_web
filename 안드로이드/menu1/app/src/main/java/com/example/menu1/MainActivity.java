package com.example.menu1;

import android.os.PersistableBundle;
import android.support.annotation.Nullable;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.SubMenu;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    TextView objTxtView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        objTxtView=(TextView) findViewById(R.id.TextView01);
        registerForContextMenu(objTxtView);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        super.onCreateOptionsMenu(menu);
        MenuItem mnuTextColor=menu.add("Text Color");
        MenuItem mnuTextSize=menu.add("Text Size");
        MenuItem mnuTextStyle=menu.add("Text Style");
        SubMenu etc=menu.addSubMenu("Etc");
        SubMenu mnuArtist=etc.addSubMenu("Love2");
        mnuArtist.setIcon(R.drawable.love2);
        SubMenu mnuAlbum=etc.addSubMenu("Lovv1");
        mnuArtist.setIcon(R.drawable.lovv1);
        SubMenu mnuMovie=etc.addSubMenu("Lovv2");
        mnuArtist.setIcon(R.drawable.lovv3);
        return true;



    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        int id=item.getItemId();
        return super.onOptionsItemSelected(item);
    }

    @Override
    public boolean onPrepareOptionsMenu(Menu menu) {
        return super.onPrepareOptionsMenu(menu);
    }
}
