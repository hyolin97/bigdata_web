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

public class Activity_4_8_3 extends Activity {

    String myJSON;

    private static final String TAG_RESULTS = "result";
    private static final String TAG_PADAMOUNT = "pad_amount";


    JSONArray peoples = null;
    ArrayList<HashMap<String, String>> personList;

    ListView list;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_4_8_3);
        list = (ListView) findViewById(R.id.listView);
        personList = new ArrayList<HashMap<String, String>>(); //ㄴㄴ
        getData("http://014038ce.ngrok.io///hackathon2018/eighth_3.php");

        Button btn8_3 = (Button) findViewById(R.id.btn8_3);

        btn8_3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intentmap3 = new Intent();
                intentmap3.setAction(Intent.ACTION_VIEW);
                intentmap3.addCategory(Intent.CATEGORY_BROWSABLE);
                intentmap3.setData(Uri.parse("https://www.google.com/maps/place/%EB%B3%B5%EC%A0%95%EC%97%AD(8%ED%98%B8%EC%84%A0)/@37.4701878,127.1244638,17z/data=!3m1!4b1!4m5!3m4!1s0x357caf55e512afd9:0xcb1c4c8e13fa5455!8m2!3d37.4701878!4d127.1266525"));
                startActivity(intentmap3);
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
                    Activity_4_8_3.this, personList, R.layout.list_item,
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
