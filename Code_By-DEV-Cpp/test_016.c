//test_016.c--Just a test for Qisheng Wang. 

#include <stdio.h>

int main()
{
	int x,y,z;
	printf("Please enter a number:");
	scanf("%d",&x);
	if(x>1000)
	{
		printf("Error!!");
	}
	else
	{
		y=x*x;
		z=y-x;
		if(z%10==0)
		{
			printf("%d yes %d",x,y);
		}
		else
		{
			printf("%d no %d",x,y);
		}
	}
	return 0;
}
