#include<stdio.h>
#include<stdlib.h>
void square(int *);
int main (void){
	printf("第1題\n");
	struct data
	{
		char ch;
		int dist;
	}abc;
	printf("sizeof(abc)=%d\n",sizeof(abc));
	printf("-----------------------------------------------------------\n");
	
	printf("第2題\n");
	int *ptrA,*ptrB;
	int a=15,b=16;
	ptrA=&a;
	ptrB=&b;
	printf("a*b= %d\n",(*ptrA)*(*ptrB));
	printf("-----------------------------------------------------------\n");
	
	printf("第3題\n");
	int c[5]={2,4,6,8,10};
	int j;
	printf("呼叫square()前: ");
	for(j=0;j<5;j++)
	{
		printf("%d ",c[j]);
	}
	printf("\n");
	printf("呼叫square()後: ");
	square(c);
	printf("\n");
	printf("-----------------------------------------------------------\n");
	
	printf("第4題\n");
	int arr[5]={34,76,33,42,76};
	printf("加上10後: ");
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
