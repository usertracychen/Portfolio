#include<stdlib.h>
#include<stdio.h>
void kitty(int);
void mod(int,int);
void multiply(int,int);
int main(void)
{
	printf("��1�D\n");
	int k;
	printf("�п�J���: ");
	scanf("%d",&k);
	kitty(k);
	
	printf("-----------------------------------------------------------\n");
	printf("��2�D\n");
	mod(17,3);
	
	printf("-----------------------------------------------------------\n");
	printf("��3�D\n");
	int x,y;
	printf("�п�J��ӼƦr: \n");
	scanf("%d %d",&x,&y);
	multiply(x,y);
	
	printf("-----------------------------------------------------------\n");
	printf("��4�D\n");
	int i;
	for(i=65;i<=90;i++)
	{
		printf("%c ",i);
	}
	printf("\n");
	
	
	
	
	system("pause");
	return 0;
}

void kitty(int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		printf("Hello Kitty\n");
	}
}

void mod(int x, int y)
{
	printf("x%%y= %d\n",x%y );
}

void multiply (int x, int y)
{
	printf("%d x %d = %d\n",x,y,x*y);
}
