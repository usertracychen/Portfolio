from django.shortcuts import render
from django.http import HttpResponse

def homework2(request, username):
    # print(username)
    # return HttpResponse("test.......")
    return render(request, "show.html",locals())  
    
import random
def lotto1(request):
    num_list=random.sample(range(1,6),5)
    #print(num_list)
    return render(request,'lotto1.html',locals())
    #return HttpResponse(num_list)

def lotto2(request):
    random_num_lists=[]
    for n in range(1,7):
        num_list=random.sample(range(1,43),6)
        random_num_lists.append(num_list)
    
    print(random_num_lists)
    return render(request,'lotto2.html',locals())