#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("��1�D\n");
	char str[]="Hello, C language.";
	printf("str[]�@���F%d bytes\n",sizeof(str));
	
	printf("----------------------------------------\n");
	
	printf("��2�D\n");
	int r;
	printf("�п�J�ꪺ�b�|: ");
	scanf("%d",&r);
	fflush(stdin);
	
	printf("�b�|�� %d ����A�P����%2f�A���n��%.2f\n",r,r*2*3.14,r*r*3.14);
	
	printf("----------------------------------------\n");
	
	printf("��3�D\n");
	int i, arr[9]={2,3,10,7,1,4,5,8,9};
	for(i=0;i<9;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	printf("----------------------------------------\n");
	
	printf("��4�D\n");
	int boba=0, woolong=0,sum=0,total=0;
	printf("�ï]�����P�Q�s���K���O�� 45 �P 55 ��,�аݱz�U�ݭn�R�X�~? \n");
	printf("�ï]�����~��: ");
	scanf("%d",&boba);
	printf("�Q�s���K�~��: ");
	scanf("%d",&woolong);
	sum=boba+woolong;
	total=45*boba + 55*woolong;
	
	if(sum>15 && total>=800)
	{
		printf("�ï]����%d�~�P�Q�s���K%d�~�A����@�p%d���A�E���u�f�ᬰ%.0f���C \n",boba,woolong,total,0.9*total);
	}
	else
	{
		printf("�ï]����%d�~�P�Q�s���K%d�~�A����@�p%d���C \n",boba,woolong,total);
	}
	
	
	
	
	
}
