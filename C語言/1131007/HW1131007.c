#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("��1�D�Эק郞���P��~�Z�{���A�ϱo�{������X���O�O�~�ȭ�1�[�~�ȭ�2���W�b�~�P���`�~�Z�A�M�~�ȭ�1�[�~�ȭ�2���U�b�~�P���`�~�Z�C\n");
	int i, j;
	int sale[2][2];
	int sum1=0;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("�~�ȭ�%d ��%d�b�~: ",i+1,j+1);
			scanf("%d",&sale[i][j]);
			
		}
	}
	
	for(i=0;i<2;i++)
	{
		printf("\n�~�ȭ� %d �W�U�b�~�P��q: ", i+1);
		for(j=0;j<2;j++)
		{
			printf("%d ", sale[i][j]);
			
		}
	
	}
	
	for(j=0;j<2;j++)
	{
		sum1=0;
		printf("\n�~�ȭ�1,2 ��%d�b�~�P��q�[�`: ", j+1);
		for(i=0;i<2;i++)
		{
		
			sum1=sum1+sale[i][j];
			
		}
		printf("%d ", sum1);
	}
	
	printf("\n--------------------------------------------------------------\n");
	printf("��2�D�м��g�@�{���A�i����L��J�@�Ӿ�ơA�M��P�_���O�_�Ʃΰ��ơC\n");
	int a=0;
	
	printf("�п�J�@�Ӿ��: ");
	scanf("%d",&a);
	if(a%2==0)
	{
	 	printf("��J����Ƭ�����\n");
	}else
	{
		printf("��J����Ƭ��_��\n");
	 } 
	 
	printf("---------------------------------------------------------------\n");
	printf("��3�D�ռ��g�@�{���A�ŧi�@�Ө㦳8�Ӥ�������ư}�Ceight�A�M��Q����L��J�Ʀr�A�N�}�C����8�Ӥ����]�ȡA�̫��{���̦L�X�o8�Ӥ����B�p���`�X��\n");
	int eight[8];
	int sum=0;
	for(i=0;i<8;i++)
	{
		printf("�п�J��%d�Ӽ�: ",i+1);
		scanf("%d",&eight[i]);
	}
	printf("8�ӼƤ��O��: ");
	for(i=0;i<8;i++)
	{
		
		printf("%d ",eight[i]);
		sum=sum+eight[i];
	}
	printf("\n");
	printf("8�Ӽƥ[�`��:%d \n ",sum);
	
	printf("--------------------------------------------------------------\n");
	
	printf("��4�D�ռ��gdo while�{����X200��500�����i�H�Q3��7�㰣�����\n");
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
