package com.example.ex_4;

import androidx.appcompat.app.AppCompatActivity;

import android.app.Dialog;
import android.content.Intent;
import android.content.res.TypedArray;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.ListView;
import android.widget.SimpleAdapter;
import android.widget.TextView;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;

public class MainActivity extends AppCompatActivity {

    private ListView listViewData;
    private String[] namecity;
    private ArrayList<Map<String, Object>> listdata;
    private TypedArray piccity;
    private SimpleAdapter adapter;
    private TextView textviewdialogtitle;
    private Button buttonOK,buttonCancel;
    private ImageView imageviewdlg;
    private TypedArray piccityicon;
    private String[] cityinfo;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        listViewData =(ListView)findViewById(R.id.listView_id);

        namecity = getResources().getStringArray(R.array.cityname);
        piccity = getResources().obtainTypedArray(R.array.citypicture);
        piccityicon = getResources().obtainTypedArray(R.array.citypicicon);
        cityinfo = getResources().getStringArray(R.array.city_info);
        listdata = new ArrayList<Map<String, Object>>();

        for(int i=0; i<namecity.length;i++){
            Map<String,Object> data = new HashMap<String, Object>();

            data.put("name",namecity[i]);
            data.put("picture",piccity.getResourceId(i,0));
            data.put("pictureicon",piccityicon.getResourceId(i,0));
            data.put("cityinfo",cityinfo[i]);

            listdata.add(data);
        }

        adapter = new SimpleAdapter(MainActivity.this,listdata,R.layout.item_layout,new String[]{"name", "picture"},new int[]{R.id.textView_itemName, R.id.imageView_itemPic});
        listViewData.setAdapter(adapter);

        listViewData.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            String cityName,cityInfomation;
            int cityPicResId;
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Map<String,Object> item = (Map<String, Object>) parent.getItemAtPosition(position);
                Dialog myBuilder = new Dialog(MainActivity.this);
                myBuilder.setContentView(R.layout.dialog_layout);
                textviewdialogtitle = (TextView)myBuilder.findViewById(R.id.textView_dlgtitle);
                imageviewdlg =(ImageView)myBuilder.findViewById(R.id.imageView_dlg);
                buttonOK =(Button)myBuilder.findViewById(R.id.button_dlgok);
                buttonCancel = (Button)myBuilder.findViewById(R.id.button_dlgcancel);

                cityName = Objects.requireNonNull(item.get("name")).toString();
                int cityPiciconResId = (Integer) Objects.requireNonNull(item.get("pictureicon"));
                cityPicResId = (Integer) Objects.requireNonNull(item.get("picture"));
                cityInfomation =Objects.requireNonNull(item.get("cityinfo")).toString();
                textviewdialogtitle.setText(cityName);
                imageviewdlg.setImageResource(cityPiciconResId);

                buttonCancel.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        myBuilder.dismiss();
                    }
                });

                buttonOK.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        Intent intent = new Intent(MainActivity.this, DisplayActivity.class);
                        intent.putExtra("cityname",cityName);
                        intent.putExtra("picture",cityPicResId);
                        intent.putExtra("cityinfo",cityInfomation);
                        myBuilder.dismiss();
                        startActivity(intent);
                    }
                });

                myBuilder.show();

            }

        });

    }
}