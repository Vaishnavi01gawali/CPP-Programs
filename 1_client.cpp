#include<stdio.h>
#include"server.h"

int main(void)
{
	int iAns;
	struct demo Obj1;
	struct demo Obj2;
	
	printf("Obj1:\n");
	Obj1.scan();
	Obj1.print();
	iAns=Obj1.Addition();
	printf("\n Obj1:Answer is %d\n",iAns);
	
	printf("Obj2:\n");
	Obj2.scan();
	Obj2.print();
	iAns=Obj2.Addition();
	printf("\n Obj2:Answer is %d\n",iAns);
	
	return 0;
}
