package com.example.videoroom;
import android.Manifest;
import android.app.Activity;
import android.app.ListActivity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.media.ThumbnailUtils;
import android.os.Bundle;
import android.os.Environment;
import android.provider.MediaStore;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import java.io.File;
import java.util.ArrayList;
import java.util.List;

public class VideoListActivity extends Activity{
    File file;
    ListView listView;
    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.acivity_videolist);

        listView = (ListView)findViewById(R.id.listview);

        ArrayList<ImgTextItem> data = new ArrayList<>();

        String path = Environment.getExternalStorageDirectory().getAbsolutePath().toString();
        file = new File(path+"/DCIM/Camera");

        File list[] = file.listFiles();

        MyArrayAdapter myadapter = new MyArrayAdapter();
        listView.setAdapter(myadapter);

        for(int i=0; i<list.length;i++){
            String filepath = path+"/DCIM/Camera/"+list[i].getName();
            Bitmap thumbnail = ThumbnailUtils.createVideoThumbnail(filepath, MediaStore.Images.Thumbnails.MINI_KIND);
            BitmapDrawable bitmapDrawable = new BitmapDrawable(thumbnail);

            myadapter.addItem(list[i].getName(),bitmapDrawable);

        }

        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {

                File list[]  = file.listFiles();
                String filename = list[position].getName();
                Toast.makeText(getApplicationContext(),filename,Toast.LENGTH_LONG).show();

                Intent intent = new Intent(VideoListActivity.this, VideoPlayActivity.class);
                intent.putExtra("filename", filename);
                startActivity(intent);

            }
        });

    }

    private class MyArrayAdapter extends BaseAdapter{
        private LayoutInflater inflater;
        private ArrayList <ImgTextItem> items = new ArrayList<ImgTextItem>();
        private int layout;


        public MyArrayAdapter() { }

        @Override
        public int getCount() {
            return items.size();
        }

        @Override
        public Object getItem(int position) {
            return items.get(position);
        }

        @Override
        public long getItemId(int position) {
            return position;
        }

        public void addItem(String id, Drawable img) {
            ImgTextItem item = new ImgTextItem();

            item.setId(id);
            item.setImg(img);

            items.add(item);
        }


        @NonNull
        @Override
        public View getView(int position, @Nullable View convertView, @NonNull ViewGroup parent) {
            final Context context = parent.getContext();


            if(convertView==null){
                LayoutInflater inflater = (LayoutInflater) context.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
                convertView=inflater.inflate(R.layout.listview,parent,false);
            }
            ImgTextItem item = items.get(position);

            TextView tv = (TextView)convertView.findViewById(R.id.list_tv);
            ImageView iv = (ImageView)convertView.findViewById(R.id.list_icon);

            iv.setImageDrawable(item.getImg());
            tv.setText(item.getId());

            return convertView;
        }
    }
}
class ImgTextItem {

    private String id;
    private Drawable img;

    public ImgTextItem(){
        this.id = id;
        this.img = img;
    }

    public String getId() {
        return id;
    }

    public Drawable getImg() {
        return img;
    }

    public void setId(String id) {
        this.id = id;
    }

    public void setImg(Drawable img) {
        this.img = img;
    }
}
