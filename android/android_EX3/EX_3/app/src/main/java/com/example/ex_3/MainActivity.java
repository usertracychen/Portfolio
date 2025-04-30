package com.example.ex_3;

import androidx.activity.result.ActivityResult;
import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private EditText editTextName;
    private Button buttonbmi;
    private ActivityResultLauncher<Intent> getResultLaunch;
    private int resultcode=200;
    private TextView textViewheight,textViewweight,textViewbmi;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        editTextName = (EditText)findViewById(R.id.editText_maininputName);
        buttonbmi =(Button)findViewById(R.id.button_mainBMI);
        textViewheight = (TextView)findViewById(R.id.textView_mainheight);
        textViewweight = (TextView)findViewById(R.id.textView_mainweight);
        textViewbmi = (TextView)findViewById(R.id.textView_mainrbmi);

        textViewbmi.setText("");
        textViewweight.setText("");
        textViewheight.setText("");
        getResultLaunch = registerForActivityResult(new ActivityResultContracts.StartActivityForResult(), new ActivityResultCallback<ActivityResult>() {
            @Override
            public void onActivityResult(ActivityResult o) {
                if(o.getResultCode()==resultcode){
                    Intent intentreceive = o.getData();
                    float data = intentreceive.getFloatExtra("height",0f);
                    float data2 = intentreceive.getFloatExtra("weight",0f);
                    float data3 = intentreceive.getFloatExtra("result",0f);
                    textViewheight.setText("身高 = "+data);
                    textViewheight.setText("體重 = "+data2);
                    textViewbmi.setText("BMI = "+data3);

                }
            }
        });

        buttonbmi.setOnClickListener(new View.OnClickListener() {
            private String name;

            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, Activity1.class);
                if (editTextName.length()==0){
                    name="no name";
                }else{
                    name=editTextName.getText().toString();
                }

                intent.putExtra("name",name);
                getResultLaunch.launch(intent);
            }
        });
    }
}