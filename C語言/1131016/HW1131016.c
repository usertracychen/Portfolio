#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void count(int *);
void PP(int *,int ,int);
int main(void)
{
	printf("第1題\n");
	float num=12.6f;
	float *ptr;
	ptr=&num;
	printf("num=%.1f,ptr=%p,&ptr=%p\n\n",num,ptr,&ptr);
	
	printf("第2題\n");
	int num2=0;
	int i=0;
	for(i=0;i<5;i++)
	{
		count(&num2);
	}
	printf("呼叫count()5次後,值為: %d\n\n",num2);
	

	
	printf("第3題\n");
	char str[50];
	int times_a=0;
	int times_e=0;
	int times_i=0;
	int times_o=0;
	int times_u=0;
	printf("請輸入字串: ");
	gets(str);
	fflush(stdin);
	for(i=0;i<strlen(str);i++)
	{
		switch (str[i])
		{
			case 'a':
				times_a++;
				break;
			case 'e':
				times_e++;
				break;
			case 'i':
				times_i++;
				break;
			case 'o':
				times_o++;
				break;
			case 'u':
				times_u++;
				break;
				
		}
	}
	printf("字串中,a 有%d個 ; e 有%d個 ; i 有%d個 ; o 有%d個 ; u 有%d個\n\n",times_a,times_e,times_i,times_o,times_u);
	
	
	printf("第4題\n");
	
	int AK[7]={23,39,77,74,25,82,91};
	int N,replace=0;
	printf("請輸入第幾個元素: ");
	scanf("%d",&N);
	printf("替換為: ");
	scanf("%d",&replace);
	
	PP(&AK,N,replace);
	
	printf("AK[7]變為");
	for(i=0;i<7;i++)
	{
		printf("%d  ",AK[i]);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}

void count(int * a)
{
	*a=*a+1;
}

void PP(int *arr,int N,int replace)
{
	
	arr[N-1]=replace;
}
