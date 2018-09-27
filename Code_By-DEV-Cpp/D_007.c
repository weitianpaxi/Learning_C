# include <stdio.h>
main()
{
	int x=9,y=8,z=7;
	int a,b,c;
	a=x>y>z;
	b=--x-y>=z;
	c=x==y;
	printf("\nx=%d, y=%d, z=%d",x,y,z);
	printf("\na=%d. b=%d, c=%d",a,b,c);
	return 0;	
 } 
