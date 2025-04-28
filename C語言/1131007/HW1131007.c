#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("第1題請修改車輛銷售業績程式，使得程式的輸出分別是業務員1加業務員2的上半年銷售總業績，和業務員1加業務員2的下半年銷售總業績。\n");
	int i, j;
	int sale[2][2];
	int sum1=0;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("業務員%d 第%d半年: ",i+1,j+1);
			scanf("%d",&sale[i][j]);
			
		}
	}
	
	for(i=0;i<2;i++)
	{
		printf("\n業務員 %d 上下半年銷售量: ", i+1);
		for(j=0;j<2;j++)
		{
			printf("%d ", sale[i][j]);
			
		}
	
	}
	
	for(j=0;j<2;j++)
	{
		sum1=0;
		printf("\n業務員1,2 第%d半年銷售量加總: ", j+1);
		for(i=0;i<2;i++)
		{
		
			sum1=sum1+sale[i][j];
			
		}
		printf("%d ", sum1);
	}
	
	printf("\n--------------------------------------------------------------\n");
	printf("第2題請撰寫一程式，可由鍵盤輸入一個整數，然後判斷它是奇數或偶數。\n");
	int a=0;
	
	printf("請輸入一個整數: ");
	scanf("%d",&a);
	if(a%2==0)
	{
	 	printf("輸入的整數為偶數\n");
	}else
	{
		printf("輸入的整數為奇數\n");
	 } 
	 
	printf("---------------------------------------------------------------\n");
	printf("第3題試撰寫一程式，宣告一個具有8個元素的整數陣列eight，然後利用鍵盤輸入數字，將陣列內的8個元素設值，最後於程式裡印出這8個元素且計算總合值\n");
	int eight[8];
	int sum=0;
	for(i=0;i<8;i++)
	{
		printf("請輸入第%d個數: ",i+1);
		scanf("%d",&eight[i]);
	}
	printf("8個數分別為: ");
	for(i=0;i<8;i++)
	{
		
		printf("%d ",eight[i]);
		sum=sum+eight[i];
	}
	printf("\n");
	printf("8個數加總為:%d \n ",sum);
	
	printf("--------------------------------------------------------------\n");
	
	printf("第4題試撰寫do while程式輸出200到500之間可以被3跟7整除的整數\n");
	int b[301];
	
	for(i=0;i<301;i++)
	{
		b[i]=200+i;
	}
	i=0;
	do
	{
		if(b[i]%21==0)
		{
			printf("%d ",b[i]);
		}
		i++;
		
	}while(i<301);
	
	
	
	
	
	
}
