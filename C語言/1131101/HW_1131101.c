#include<stdio.h>
#include<stdlib.h>
void square(int *);
int main (void){
	printf("��1�D\n");
	struct data
	{
		char ch;
		int dist;
	}abc;
	printf("sizeof(abc)=%d\n",sizeof(abc));
	printf("-----------------------------------------------------------\n");
	
	printf("��2�D\n");
	int *ptrA,*ptrB;
	int a=15,b=16;
	ptrA=&a;
	ptrB=&b;
	printf("a*b= %d\n",(*ptrA)*(*ptrB));
	printf("-----------------------------------------------------------\n");
	
	printf("��3�D\n");
	int c[5]={2,4,6,8,10};
	int j;
	printf("�I�ssquare()�e: ");
	for(j=0;j<5;j++)
	{
		printf("%d ",c[j]);
	}
	printf("\n");
	printf("�I�ssquare()��: ");
	square(c);
	printf("\n");
	printf("-----------------------------------------------------------\n");
	
	printf("��4�D\n");
	int arr[5]={34,76,33,42,76};
	printf("�[�W10��: ");
	for(j=0;j<5;j++)
	{
		printf("%d ",*(arr+j)+10);
	}
	printf("\n");
	
	system("pause");
	return 0;
} 

void square(int*arr)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",(*(arr+i))*(*(arr+i)));
	}
}
