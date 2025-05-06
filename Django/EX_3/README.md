<h1>Django_EX3</h1>
1.建立資料庫「h_iot_relay」

--STEP1--<br>
修改homework4專案資料夾內的settings.py 的DATABASES內容，使用mysql。
  
![image](https://github.com/user-attachments/assets/11a9d958-87dc-4aca-b138-858c15732c48)

--STEP2--<br>
於workbench 新增「h_iot_relay」資料庫
  
![image](https://github.com/user-attachments/assets/271dbd96-4aca-47dd-b537-0074d23a256b)

2.在model.py，利用ORM語法建立資料表「temperature_db」，欄位如下:
![image](https://github.com/user-attachments/assets/457ced5f-a86d-49a4-abce-baab5e9ba018)

--STEP1--<br>
於homework4專案資料夾內 models.py 檔案 新增「temperature_db」資料表
  
![image](https://github.com/user-attachments/assets/e056dcd8-938a-49e6-a53a-a6e0f6a2a9aa)

--STEP2--<br>
於terminal 輸入以下指令：<br>
..\Scripts\activate              (註:進入虛擬環境)<br>
pip install --only-binary :all: mysqlclient		(註:若pip list 沒有mysqlclient 要執行此步驟)<br>
python .\manage.py makemigrations  <br>
python .\manage.py migrate <br>

![image](https://github.com/user-attachments/assets/1d8316f2-ab35-455e-831f-d24e24cab207)
![image](https://github.com/user-attachments/assets/8bce32da-c497-4ec9-b0bc-4ff135c782d2)

3.利用Workbench將資料庫資料表的資料匯入，sql語法如下:
INSERT INTO myapp_temperature_db (sensor_id, temperature, humidity, timestamp) VALUES
(1, 30.2, 68.2, '2022-08-09 08:14:10'),
(1, 36, 80.3, '2022-08-09 09:29:29'),
(1, 30.2, 86.3, '2022-08-09 11:00:00'),
(1, 60, 86, '2022-08-09 13:00:00');
![image](https://github.com/user-attachments/assets/c2726f81-a4f1-4fa5-aef6-a58b42228c59)

4.撰寫url(如下)、view(內容自訂)、建立templates(自訂)
url:
path('view_history_temperature/', views.view_history_temperature)

![image](https://github.com/user-attachments/assets/27391738-2a8b-4491-9b9f-530bf118e439)
![image](https://github.com/user-attachments/assets/6742223b-e951-4660-a358-2806167efc79)
![image](https://github.com/user-attachments/assets/ef8992e9-99d0-4b74-83d5-3144339ebf92)
![image](https://github.com/user-attachments/assets/25e54a10-e390-4b8d-8651-15af3b7059a4)







