package com.example.ex_2;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioGroup;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    private EditText editTextname,editTextother;
    private CheckBox checkboxreading,checkboxpainting,checkboxsport,checkboxother;
    private RadioGroup radiogropsex;
    private TextView textViewResult;
    private Button buttonok,buttoncancel;



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        editTextname= (EditText)findViewById(R.id.editText_name);
        editTextother=(EditText)findViewById(R.id.editText_other);

        radiogropsex=(RadioGroup)findViewById(R.id.radioGroup_sex);

        checkboxreading =(CheckBox)findViewById(R.id.checkBox_reading);
        checkboxpainting =(CheckBox)findViewById(R.id.checkBox_painting);
        checkboxsport =(CheckBox)findViewById(R.id.checkBox_sport);
        checkboxother =(CheckBox)findViewById(R.id.checkBox_other);
        
        textViewResult =(TextView)findViewById(R.id.textView_result);
        textViewResult.setText("");

        buttonok = (Button)findViewById(R.id.button_ok);
        buttoncancel =(Button)findViewById(R.id.button_cancel);

        buttonok.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // 每次按確定都先清空顯示
                textViewResult.setText("");

                // 設一個布林變數來判斷是否所有欄位都OK
                boolean allOk = true;

                // 1. 檢查名字
                if (editTextname.length() == 0) {
                    Toast.makeText(MainActivity.this, "Please input name.", Toast.LENGTH_SHORT).show();
                    allOk = false;
                }

                // 2. 檢查性別
                int checkedId = radiogropsex.getCheckedRadioButtonId();
                if (checkedId == -1) { // -1 表示未選擇任何 RadioButton
                    Toast.makeText(MainActivity.this, "請選擇性別", Toast.LENGTH_SHORT).show();
                    allOk = false;
                }

                // 3. 檢查興趣 (至少要選一個)
                boolean reading = checkboxreading.isChecked();
                boolean painting = checkboxpainting.isChecked();
                boolean sport   = checkboxsport.isChecked();
                boolean other   = checkboxother.isChecked();

                // 如果沒有任何興趣被勾選
                if (!reading && !painting && !sport && !other) {
                    Toast.makeText(MainActivity.this, "Please choose hobby.", Toast.LENGTH_SHORT).show();
                    allOk = false;
                } else {
                    // 如果勾選了「other」，但沒有填寫內容
                    if (other && editTextother.length() == 0) {
                        Toast.makeText(MainActivity.this, "Please input your hobby.", Toast.LENGTH_SHORT).show();
                        allOk = false;
                    }
                }

                // 若上面的檢查有任何一項失敗，就直接 return，不顯示到 TextView
                if (!allOk) {
                    return;
                }

                // =============== 以下只有在所有檢查都通過時才會執行 ===============

                // 顯示 Name
                textViewResult.append("Name: " + editTextname.getText().toString() + "\n");

                // 顯示性別
                switch (checkedId) {
                    case R.id.radioButton_boy:
                        textViewResult.append("性別: 男生\n");
                        break;
                    case R.id.radioButton_girl:
                        textViewResult.append("性別: 女生\n");
                        break;
                }

                // 顯示興趣
                textViewResult.append("興趣:\n");
                if (reading) {
                    textViewResult.append(checkboxreading.getText() + "\n");
                }
                if (painting) {
                    textViewResult.append(checkboxpainting.getText() + "\n");
                }
                if (sport) {
                    textViewResult.append(checkboxsport.getText() + "\n");
                }
                if (other) {
                    textViewResult.append(editTextother.getText() + "\n");
                }
            }
        });


        buttoncancel.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                textViewResult.setText("");
                editTextother.setText("");
                editTextname.setText("");
                radiogropsex.clearCheck();
                checkboxreading.setChecked(false);
                checkboxpainting.setChecked(false);
                checkboxsport.setChecked(false);
                checkboxother.setChecked(false);
            }
        });





        
    }
}