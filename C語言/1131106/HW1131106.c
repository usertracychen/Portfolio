#include<stdio.h>
#include<stdlib.h>
int main(void){
	printf("��1�D\n");
	struct computer{
		char cpu[10];
		int memory;
		char os[20];
		int harddisk;
	}comp;
	printf("CPU�t�P: ");
	gets(comp.cpu);
	printf("�O����j�p: ");
	scanf("%d",&comp.memory);
	fflush(stdin);
	printf("�@�~�t��: ");
	gets(comp.os);
	printf("�w�Фj�p: ");
	scanf("%d",&comp.harddisk);
	fflush(stdin);
	
	printf("CPU�t�P: %s ,�O����j�p: %d G,�@�~�t��: %s,�w�Фj�p:%d G\n",comp.cpu,comp.memory,comp.os,comp.harddisk);
	
	printf("---------------------------------------------------------------------\n");
	printf("��2�D\n");
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
	printf("��3�D\n");
	int arr[2][5]={{1, 2, 3, 4, 5},{5, 6, 7, 8, 9}};
	printf("arr�}�C���� �ƭ�7 ����arr[1][2]=%d\n",arr[1][2]);
	printf("arr�}�C���� �ƭ�7 ����arr[1][2]=%d\n ,�[6�ᵲ�G�� %d\n",arr[1][2],arr[1][2]+6);


	
	system("pause");
	return 0;
} 

