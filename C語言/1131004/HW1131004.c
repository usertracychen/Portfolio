#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("第1題\n");
	char str[]="Hello, C language.";
	printf("str[]共佔了%d bytes\n",sizeof(str));
	
	printf("----------------------------------------\n");
	
	printf("第2題\n");
	int r;
	printf("請輸入圓的半徑: ");
	scanf("%d",&r);
	fflush(stdin);
	
	printf("半徑為 %d 的圓，周長為%2f，面積為%.2f\n",r,r*2*3.14,r*r*3.14);
	
	printf("----------------------------------------\n");
	
	printf("第3題\n");
	int i, arr[9]={2,3,10,7,1,4,5,8,9};
	for(i=0;i<9;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	printf("----------------------------------------\n");
	
	printf("第4題\n");
	int boba=0, woolong=0,sum=0,total=0;
	printf("珍珠奶茶與烏龍拿鐵分別為 45 與 55 元,請問您各需要買幾瓶? \n");
	printf("珍珠奶茶瓶數: ");
	scanf("%d",&boba);
	printf("烏龍拿鐵瓶數: ");
	scanf("%d",&woolong);
	sum=boba+woolong;
	total=45*boba + 55*woolong;
	
	if(sum>15 && total>=800)
	{
		printf("珍珠奶茶%d瓶與烏龍拿鐵%d瓶，原價共計%d元，九折優惠後為%.0f元。 \n",boba,woolong,total,0.9*total);
	}
	else
	{
		printf("珍珠奶茶%d瓶與烏龍拿鐵%d瓶，原價共計%d元。 \n",boba,woolong,total);
	}
	
	
	
	
	
}
