#include <stdio.h>
#include<stdlib.h>
int main (void)
{
	printf("��1�D:\n");
	int i;
	int sum=0;

	for (i=1;i<=10;i++)
	{
		
		sum=sum+(i*i);
	}
	printf("1^2+2^2+3^2+�K+10^2=%d\n",sum);
	
	printf("-------------------------------------\n");
	
	printf("��2�D:\n");
	char keyin;
	printf("�Х���L��J�ƭ�1~4: ");
	scanf("%c",&keyin);
	switch(keyin)
	{
		case'1':
			printf("�K��\n");
			break;
		case'2':
			printf("�L��\n");
			break;
		case'3':
			printf("���\n");
			break;
		case'4':
			printf("�V��\n");
			break;
		default:
			printf("��J���~\n");
		
	}
	
	printf("-------------------------------------\n");
	
	printf("��3�D:\n");
	int num1,num2,num3;
	char c;
	int max;
	printf("�п�J3�Ӥ��P���:(ex.3,5,6)");
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
	
	printf("�̤j�Ȭ�:%d\n",max);
	
	system("pause");
	return 0;
	
}
