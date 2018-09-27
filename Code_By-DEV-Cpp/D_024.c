#include <stdio.h>
int main()
{
	double i,t,sum;
	sum=0;
	for(i=t=1;i<=20;i++)
	{
		t=t*i;
		sum=t+sum;
	 } 
	printf("%.0lf\n%.0lf",t,sum);
	return 0;
 } 
