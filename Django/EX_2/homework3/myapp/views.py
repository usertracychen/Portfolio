from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def homework3(request):
    if request.method == "POST":
        username=request.POST["userName"]
        sex=request.POST.get("sex")
        items=request.POST.getlist("activity[]")
        usernumber=request.POST.get("usernumber[]")
        useropinion=request.POST.get("userOpinion")
        return render(request,"response.html",{"s":sex,"username":username,"items":items,"usernumber":usernumber,"useropinion":useropinion})
    else:
        return render(request,"show.html",locals())

