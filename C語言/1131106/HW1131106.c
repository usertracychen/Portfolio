#include<stdio.h>
#include<stdlib.h>
int main(void){
	printf("第1題\n");
	struct computer{
		char cpu[10];
		int memory;
		char os[20];
		int harddisk;
	}comp;
	printf("CPU廠牌: ");
	gets(comp.cpu);
	printf("記憶體大小: ");
	scanf("%d",&comp.memory);
	fflush(stdin);
	printf("作業系統: ");
	gets(comp.os);
	printf("硬碟大小: ");
	scanf("%d",&comp.harddisk);
	fflush(stdin);
	
	printf("CPU廠牌: %s ,記憶體大小: %d G,作業系統: %s,硬碟大小:%d G\n",comp.cpu,comp.memory,comp.os,comp.harddisk);
	
	printf("---------------------------------------------------------------------\n");
	printf("第2題\n");
	struct data{
		char name[15] ;
		int chinese ;
		int physics ;
	}student[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("Name: ");
		gets((student+i)->name);
		printf("chinese: ");
		scanf("%d",&(student+i)->chinese);
		fflush(stdin);
		printf("physics: ");
		scanf("%d",&(student+i)->physics);
		fflush(stdin);
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		printf("%s \nchinese:%d physics:%d\n",(student+i)->name,(student+i)->chinese,(student+i)->physics);
	}
	
	printf("---------------------------------------------------------------------\n");
	printf("第3題\n");
	int arr[2][5]={{1, 2, 3, 4, 5},{5, 6, 7, 8, 9}};
	printf("arr陣列元素 數值7 為取arr[1][2]=%d\n",arr[1][2]);
	printf("arr陣列元素 數值7 為取arr[1][2]=%d\n ,加6後結果為 %d\n",arr[1][2],arr[1][2]+6);


	
	system("pause");
	return 0;
} 

