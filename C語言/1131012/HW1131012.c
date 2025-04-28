#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("第1題:\n");
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
	printf("1-100偶數總和為: %d\n",sum);
	
	
	printf("-------------------------------------------\n");
	
	printf("第2題:\n");
	int PC[5]={28, 11, 47, 97, 38};
	for(i=0;i<5;i++)
	{
		printf("%d\t",PC[i]);
	}
	printf("\n");
	
	
	
	printf("-------------------------------------------\n");
	printf("第3題:\n");
	int num[7];
	int max=num[0];
	for(i=0;i<7;i++)
	{
		printf("請輸入第%d個數字",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<7;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	
	printf("最大值: %d\n",max);
	
	
	system("pause");
	return 0; 
 } 
