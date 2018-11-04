package com.example.hackerthone3;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.SimpleAdapter;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;

public class Activity_4_8_1 extends Activity {

    String myJSON;

    private static final String TAG_RESULTS = "result";
    private static final String TAG_PADAMOUNT = "pad_amount";


    JSONArray peoples = null;
    ArrayList<HashMap<String, String>> personList;

    ListView list;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_4_8_1);
        list = (ListView) findViewById(R.id.listView);
        personList = new ArrayList<HashMap<String, String>>(); //ㄴㄴ
        getData("http://014038ce.ngrok.io///hackathon2018/eighth_1.php");

        Button btn8_1 = (Button) findViewById(R.id.btn8_1);

        btn8_1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intentmap1 = new Intent();
                intentmap1.setAction(Intent.ACTION_VIEW);
                intentmap1.addCategory(Intent.CATEGORY_BROWSABLE);
                intentmap1.setData(Uri.parse("https://www.google.com/maps/place/%EC%B2%9C%ED%98%B8%EC%97%AD/@37.5383754,127.1220501,17z/data=!4m8!1m2!2m1!1z7LKc7Zi47JetIDjtmLjshKA!3m4!1s0x357ca555ada35e67:0x7b8287a75823d768!8m2!3d37.538289!4d127.1233835"));
                startActivity(intentmap1);
            }
        });
    }

    protected void showList()  { //showText
        try {
            JSONObject jsonObj = new JSONObject(myJSON);
            peoples = jsonObj.getJSONArray(TAG_RESULTS);

            for(int i=0; i < peoples.length(); i++) {
                JSONObject c = peoples.getJSONObject(i);
                String padamount = c.getString(TAG_PADAMOUNT);

                HashMap<String, String> persons = new HashMap<String, String>();

                persons.put(TAG_PADAMOUNT, padamount);

                personList.add(persons);
            }

            ListAdapter adapter = new SimpleAdapter(
                    Activity_4_8_1.this, personList, R.layout.list_item,
                    new String[] {TAG_PADAMOUNT},
                    new int[] {R.id.padamount}
            );

            list.setAdapter(adapter);
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public void getData(String url) {
        class getDataJSON extends AsyncTask<String, Void, String> {

            @Override
            protected String doInBackground(String... params) {

                String uri = params[0];
                BufferedReader bufferedReader = null;

                try {
                    URL url = new URL(uri);
                    HttpURLConnection con = (HttpURLConnection) url.openConnection();
                    StringBuilder sb = new StringBuilder();
                    bufferedReader = new BufferedReader(new InputStreamReader(con.getInputStream()));

                    String json;
                    while((json = bufferedReader.readLine()) != null) {
                        sb.append(json + "\n");
                    }

                    return sb.toString().trim();
                } catch (Exception e) {
                    e.printStackTrace();
                    return null;
                }

            }

            @Override
            protected void onPostExecute(String result) {
                myJSON = result;
                showList();
            }
        }

        getDataJSON g = new getDataJSON();
        g.execute(url);

    }



}
