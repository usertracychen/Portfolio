package com.example.ex_4;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.widget.ImageView;
import android.widget.TextView;

public class DisplayActivity extends AppCompatActivity {

    private ImageView imageViewcity;
    private TextView textView;
    private Intent intent;
    private String city;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_display);

        imageViewcity = (ImageView)findViewById(R.id.imageView_displaycity);
        textView = (TextView)findViewById(R.id.textView_display);

        intent=getIntent();
        city= getIntent().getStringExtra("cityname");
        setTitle(city);
        int imageId=intent.getIntExtra("picture",0);
        imageViewcity.setImageResource(imageId);

        String infoId =getIntent().getStringExtra("cityinfo");
        textView.setText(infoId);
    }
}