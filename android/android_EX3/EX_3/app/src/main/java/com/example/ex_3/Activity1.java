package com.example.ex_3;

import androidx.activity.OnBackPressedCallback;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class Activity1 extends AppCompatActivity {

    private String name;
    private EditText editTextheight,editTextweight;
    private Button buttonbmi;
    private TextView textViewresult;
    private float height,weight;
    private float result;

    private int resultcode=200;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_1);
        Intent intent = getIntent();
        name=intent.getStringExtra("name");
        setTitle("Hello, "+name);

        editTextheight = (EditText)findViewById(R.id.editText_act1inputheight);
        editTextweight = (EditText)findViewById(R.id.editText_act1inputweight);
        textViewresult =(TextView)findViewById(R.id.textView_act1bmi);
        buttonbmi =(Button)findViewById(R.id.button_act1BMI);

        buttonbmi.setOnClickListener(new View.OnClickListener() {



            @Override
            public void onClick(View v) {
                if(editTextheight.length()==0 ||editTextweight.length()==0){
                    Toast.makeText(Activity1.this,"Please input  weight and height both.",Toast.LENGTH_SHORT).show();
                }else{
                    height=Float.parseFloat(editTextheight.getText().toString())/100f;
                    weight=Float.parseFloat(editTextweight.getText().toString());
                    result= weight/(height*height);
                }

                textViewresult.setText("BMI = "+result);

            }
        });

        getOnBackPressedDispatcher().addCallback(this, new OnBackPressedCallback(true) {
            @Override
            public void handleOnBackPressed() {
                // 2) 這裡就是使用者按返回鍵時要做的事
                //    e.g. 檢查輸入、計算 BMI、回傳資料給上一個 Activity

                // ---- 範例 ----
                // if (...) { // 檢查若沒輸入就不允許返回
                //     Toast.makeText(Activity1.this, "Please input something", Toast.LENGTH_SHORT).show();
                //     return; // 不執行後續
                // }

                // 計算並回傳
                Intent intentback = new Intent();
                intentback.putExtra("result",result);
                intentback.putExtra("height",height);
                intentback.putExtra("weight",weight);
                setResult(resultcode,intentback);
                finish();



                // 如果想做「回到預設行為」的話，可以：
                // setEnabled(false);  // 關掉這個 callback
                // Activity1.this.onBackPressed();  // 呼叫預設 onBackPressed()
            }
        });
    }



}