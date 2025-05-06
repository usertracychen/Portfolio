from django.shortcuts import render
from django.http import HttpResponse
from myapp.models import *
from django.forms.models import model_to_dict
# Create your views here.
def homework4(request):
    resultList=temperature_db.objects.all().order_by("-timestamp")
    
    return render(request,"show.html",locals())
    
