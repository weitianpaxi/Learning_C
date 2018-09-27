#include <stdio.h>

sub(char x,char y)
{
	int z;
	z=x%y;
	return z;
}
int main()
{
	int g=5,h=3,k;
	k=sub(g,h);
	printf("%d\n",k);
	
	return 0;
}
