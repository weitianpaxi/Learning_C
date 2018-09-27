#include <stdio.h>

int A;
int power(int);
int  main()
{
	int b=4,c,d,m;
	printf("Please enter the number a and its power m:\n");
	scanf("%d,%d",&A,&m);
	c=A*b;
	printf("%d * %d = %d \n",A,b,c);
	d=power(m);
	printf("%d ** %d = %d \n",A,m,d);
	
	return 0;
}
