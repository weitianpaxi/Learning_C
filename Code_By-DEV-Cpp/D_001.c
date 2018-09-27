#include <stdio.h>


int main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int (*p)[4];
	int row,col;
	printf("Please input the row and col:\n");
	scanf("%d%d",&row,&col);
	p=a;
	printf("%d",*(*(p+(row-1))+(col-1)));
	
	return 0;
}
