#include<stdio.h>
#include<stdlib.h>
#define CUBIC(X) (X)*(X)*(X)
int cub(int);
int factorial(int);
int main (void){
	printf("��1�D\n");

	printf("CUBIC(X),X=5,���G��%d\n",CUBIC(5)) ;
	printf("CUBIC(X),X=2.4,���G��%.3f\n",CUBIC(2.4)) ;
	
	
	printf("\n��2�D\n");
	printf("5! ��%d\n",factorial(5));
	
	printf("\n��3�D\n");
	printf("cub(5)),���G��%d\n",cub(5)) ;
	
	printf("\n��4�D\n");
	int work=0;
	int pay=0;
	printf("�п�J�u�@�ɼ�: ");
	scanf("%d",&work);

	if (work <= 40) {
        pay = work * 183;
    } else if (work <= 80) {
        pay = 40 * 183 + (work - 40) * 183 * 1.25;
    } else {
        pay = 40 * 183 + 40 * 183 * 1.25 + (work - 80) * 183 * 1.5;
    }
	printf("�u�@%d�p��,�u�ꬰ:%d ��\n",work,pay);
	
	printf("\n��5�D\n");
	int sum=0;
	int i=5;
	printf("5~20�Ҧ���ƥ���Ȭ�: ");
	while(i<=20)
	{
		printf("%d ",i*i);
		sum=sum+i*i;
		i++;
		
	}
	
	printf("\n5~20�Ҧ���ƥ�����`�M��: %d\n",sum);
	
	
	printf("\n��6�D\n");
	int j=0;
	for(i=0;i<9;i++)
	{
		for(j=9;j>=(9-i);j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("\n��7�D\n");
	printf("30��300���P�ɥi�H�Q7�B5�B3�㰣���ƭȬ�:");
	for(i=30;i<=300;i++)
	{
		if(i%105==0)
		{
			printf("%d ",i);
		}
		
	}
	
	printf("\n��8�D\n");
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
	
	printf("���O��:%d",money);
	
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
