#include<stdio.h>
#include"sever.h"

void demo::Scan()
{
	printf("Enter Number 1:\t");
	scanf("%d",&iNo1);
	printf("Enter Number 2:\t");
	scanf("%d",&iNo2);
}

void demo::print()
{
	printf("\n Number 1 is %d\n",iNo1);
	printf(" Number 2 is %d\n",iNo2);
}

int demo::Addition()
{
	return iNo1+iNo2;
}
