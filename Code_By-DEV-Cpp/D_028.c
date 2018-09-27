#include <stdio.h>


int main()

{
	int a,i,j,k;
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			for(k=0;k<10;k++)
			{
				a=100*i+10*j+k;
				if(a%3==2&&a%5==3&&a%7==2)
					printf("%4d",a);	
			}
	return 0;
 } 
 
