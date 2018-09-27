#include <stdio.h>
void fun(int *x,int *y);
int main()
{
	int a,b;
	printf("Please input two numbers;\n");
	scanf("%d%d",&a,&b);
	fun(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return 0;
}
void fun(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
