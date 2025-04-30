package com.example.myapp_hw1140206;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private ImageView imageViewPic;
    private ImageButton imageButton1,imageButton2,imageButton3,imageButton4,imageButton5,imageButton6;
    private TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        imageViewPic= (ImageView)findViewById(R.id.imageView);
        imageViewPic.setVisibility(View.INVISIBLE);
        textView =(TextView)findViewById(R.id.textView);
        textView.setVisibility(View.INVISIBLE);
        imageButton1 =(ImageButton)findViewById(R.id.imageButton1);

        imageButton2 =(ImageButton)findViewById(R.id.imageButton2);
        imageButton3 =(ImageButton)findViewById(R.id.imageButton3);
        imageButton4 =(ImageButton)findViewById(R.id.imageButton4);
        imageButton5 =(ImageButton)findViewById(R.id.imageButton5);
        imageButton6 =(ImageButton)findViewById(R.id.imageButton6);

        imageButton1.setOnClickListener(new MyImgButton());
        imageButton2.setOnClickListener(new MyImgButton());
        imageButton3.setOnClickListener(new MyImgButton());
        imageButton4.setOnClickListener(new MyImgButton());
        imageButton5.setOnClickListener(new MyImgButton());
        imageButton6.setOnClickListener(new MyImgButton());

    }

    private class MyImgButton implements View.OnClickListener {

        @Override
        public void onClick(View v) {
            switch(v.getId()) {
                case R.id.imageButton1:
                    imageViewPic.setVisibility(View.VISIBLE);
                    imageViewPic.setImageResource(R.drawable.dog_1_l);
                    textView.setVisibility(View.VISIBLE);
                    textView.setText(R.string.pic1);
                    break;
                case R.id.imageButton2:
                    imageViewPic.setVisibility(View.VISIBLE);
                    imageViewPic.setImageResource(R.drawable.dog_2_l);
                    textView.setVisibility(View.VISIBLE);
                    textView.setText(R.string.pic2);
                    break;
                case R.id.imageButton3:
                    imageViewPic.setVisibility(View.VISIBLE);
                    imageViewPic.setImageResource(R.drawable.dog_3_l);
                    textView.setVisibility(View.VISIBLE);
                    textView.setText(R.string.pic3);
                    break;
                case R.id.imageButton4:
                    imageViewPic.setVisibility(View.VISIBLE);
                    imageViewPic.setImageResource(R.drawable.dog_4_l);
                    textView.setVisibility(View.VISIBLE);
                    textView.setText(R.string.pic4);
                    break;
                case R.id.imageButton5:
                    imageViewPic.setVisibility(View.VISIBLE);
                    imageViewPic.setImageResource(R.drawable.dog_5_l);
                    textView.setVisibility(View.VISIBLE);
                    textView.setText(R.string.pic5);
                    break;
                case R.id.imageButton6:
                    imageViewPic.setVisibility(View.VISIBLE);
                    imageViewPic.setImageResource(R.drawable.dog_6_l);
                    textView.setVisibility(View.VISIBLE);
                    textView.setText(R.string.pic6);
                    break;
            }
        }
    }
}