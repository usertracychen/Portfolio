#include<stdio.h>
#include<stdlib.h>
#define CUBIC(X) (X)*(X)*(X)
int cub(int);
int factorial(int);
int main (void){
	printf("第1題\n");

	printf("CUBIC(X),X=5,結果為%d\n",CUBIC(5)) ;
	printf("CUBIC(X),X=2.4,結果為%.3f\n",CUBIC(2.4)) ;
	
	
	printf("\n第2題\n");
	printf("5! 為%d\n",factorial(5));
	
	printf("\n第3題\n");
	printf("cub(5)),結果為%d\n",cub(5)) ;
	
	printf("\n第4題\n");
	int work=0;
	int pay=0;
	printf("請輸入工作時數: ");
	scanf("%d",&work);

	if (work <= 40) {
        pay = work * 183;
    } else if (work <= 80) {
        pay = 40 * 183 + (work - 40) * 183 * 1.25;
    } else {
        pay = 40 * 183 + 40 * 183 * 1.25 + (work - 80) * 183 * 1.5;
    }
	printf("工作%d小時,工資為:%d 元\n",work,pay);
	
	printf("\n第5題\n");
	int sum=0;
	int i=5;
	printf("5~20所有整數平方值為: ");
	while(i<=20)
	{
		printf("%d ",i*i);
		sum=sum+i*i;
		i++;
		
	}
	
	printf("\n5~20所有整數平方值總和為: %d\n",sum);
	
	
	printf("\n第6題\n");
	int j=0;
	for(i=0;i<9;i++)
	{
		for(j=9;j>=(9-i);j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("\n第7題\n");
	printf("30到300間同時可以被7、5、3整除的數值為:");
	for(i=30;i<=300;i++)
	{
		if(i%105==0)
		{
			printf("%d ",i);
		}
		
	}
	
	printf("\n第8題\n");
	int meter =0;
	int time =0;
	int money=0;
	printf("To compute the price, please enter the distance(m) : ");
	scanf("%d",&meter);
	printf("To compute the price, please enter the time(sec) : ");
	scanf("%d",&time);
	int status=0;
	if((meter-1250)%200==0)
	{
		status=1;
	}else
	{
		status=0;
	}
	if(meter <=1250)
	{
		money=85+(time/60)*5;
	
	}else
	{
	
		switch (status)
		{
			case (0):
			money=85+(((meter-1250)/200)+1)*5+(time/60)*5;
		    break;
		    default:
		    money=85+(meter-1250)/200*5+(time/60)*5;
		    break;
		}
		
		
	}
	
	printf("車費為:%d",money);
	
}

int  cub(int x)
{
	return(x*x*x*x*x*x*x*x);
}

int factorial (int x)
{
	int result=1;
	int i=1;
	for(i=1;i<=x;i++)
	{
		result=result*i;
	}
	return result;
	
}
