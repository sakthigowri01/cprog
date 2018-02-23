#include <stdio.h>
 
int main(void) 
{
	int num;
	printf("\n enter the number from 1 to 10");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		printf("\none");
		break;
		case 2:
		printf("\ntwo");
		break;
		case 3:
		printf("\nthree");
		break;
		case 4:
		printf("\nfour");
		break;
		case 5:
		printf("\nfive");
		break;
		case 6:
		printf("\nsix");
		break;
	
		default:
		printf("\n enter numbers from 1 to 10");
	}
 
	return 0;
}
