/*
	求前20的平方和； 
*/
#include <stdio.h>

int main()
{
	int i,sum=0,temp;
	for(i=0;i<=20;++i)
	{
		temp=i*i;
		sum=sum+temp;
	}
	printf("%4d",sum);
	
	return 0;
 } 
