#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	printf("第1題\n");
	printf("\"Hello Every One, Welcome to the C World!\"\n");
	
	printf("第2題\n");
	char x1='a',x2='b',x3='n';
	printf("%c%c%c%c%c%c\n",x2,x1,x3,x1,x3,x1);
	
	printf("第3題\n");
	int i;
	int sum=0;
	for(i=1;i<100;i=i+2)
	{
		sum=sum+i;
	}
	printf("1+3+5+...+99=%d\n",sum);
	
	system("pause");
	return 0;
}
