#include <stdio.h>

int main()
{
	int len=9,i;
	int a[len];
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<9;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");  
	
	return 0;
}
