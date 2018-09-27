#include <stdio.h>
fun(int x,int y,int z)
{
	z=x*x+y*y;
}
void main()
{
	int a=2;
	fun(5,2,a);
	printf("%d",a); 
}
