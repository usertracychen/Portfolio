from django.db import models

# Create your models here.
class temperature_db(models.Model):
    myid = models.AutoField(primary_key=True)
    sensor_id = models.IntegerField(blank=False, null=False)
    temperature = models.FloatField(blank=False, null=False)
    humidity = models.FloatField(blank=False, null=False)
    timestamp=models.DateTimeField(auto_now_add=True, null=False)