#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("��1�D:\n");
	int sum=0;
	int i=1;
	while(i<=100)
	{
		
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("1-100�����`�M��: %d\n",sum);
	
	
	printf("-------------------------------------------\n");
	
	printf("��2�D:\n");
	int PC[5]={28, 11, 47, 97, 38};
	for(i=0;i<5;i++)
	{
		printf("%d\t",PC[i]);
	}
	printf("\n");
	
	
	
	printf("-------------------------------------------\n");
	printf("��3�D:\n");
	int num[7];
	int max=num[0];
	for(i=0;i<7;i++)
	{
		printf("�п�J��%d�ӼƦr",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<7;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	
	printf("�̤j��: %d\n",max);
	
	
	system("pause");
	return 0; 
 } 
