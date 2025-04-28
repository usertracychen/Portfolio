#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
	printf("第1題\n");
	enum color
	{
		red=114,
		RED=82,
		green=103,
		GREEN=71,
		blue=98,
		BLUE=66
	}shirt;
	char key;
	do
	{
		printf("Please input the color(r,g,b OR R,G,B): ");
		scanf("%c",&key);
		fflush(stdin);
	}while((key!=red)&&(key!=green)&&(key!=blue)&&(key!=RED)&&(key!=GREEN)&&(key!=BLUE));
	shirt=key;
	switch(shirt)
	{
		case red:
		case RED:	
			printf("You selected red \n");
			break;
		case green:
		case GREEN:
			printf("You selected green \n");
			break;
		case blue:
		case BLUE:
			printf("You selected blue \n");
			break;
	}
	
	printf("------------------------------------------------------------\n");
	printf("第2題\n");
	float money;
	int opt=0;
	enum card
	{
		Platinum=1,
		Gold=2,
		Silver=3
	}mycard;
	printf("Please enter your card type: (1)Platinum (2)Gold (3)Silver:");
	scanf("%d",&opt);
	fflush(stdin);
	printf("\n");
	printf("Please enter how much you spend: ");
	scanf("%f",&money);
	mycard=opt;
	switch(mycard)
	{
		case Platinum:
			money=money*0.8;
			break;
		case Gold:
			money=money*0.85;
			break;
		case Silver:
			money=money*0.9;
			break;
	}
	
	printf("Total you have to pay: %.0f\n",money);
	
	system("pause");
	return 0;
 } 
