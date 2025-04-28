#include <stdio.h>
#include<stdlib.h>
int main (void)
{
	printf("第1題:\n");
	int i;
	int sum=0;

	for (i=1;i<=10;i++)
	{
		
		sum=sum+(i*i);
	}
	printf("1^2+2^2+3^2+…+10^2=%d\n",sum);
	
	printf("-------------------------------------\n");
	
	printf("第2題:\n");
	char keyin;
	printf("請由鍵盤輸入數值1~4: ");
	scanf("%c",&keyin);
	switch(keyin)
	{
		case'1':
			printf("春天\n");
			break;
		case'2':
			printf("夏天\n");
			break;
		case'3':
			printf("秋天\n");
			break;
		case'4':
			printf("冬天\n");
			break;
		default:
			printf("輸入錯誤\n");
		
	}
	
	printf("-------------------------------------\n");
	
	printf("第3題:\n");
	int num1,num2,num3;
	char c;
	int max;
	printf("請輸入3個不同整數:(ex.3,5,6)");
	scanf("%d %c %d %c %d",&num1,&c,&num2,&c,&num3);
	
	if(num1>num2&&num1>num3)
	{
		max=num1;
	}
	else if(num2>num1&&num2>num3)
	{
		max=num2;
	}
	else if(num3>num1&&num3>num2)
	{
		max=num3;
	}
	
	printf("最大值為:%d\n",max);
	
	system("pause");
	return 0;
	
}
