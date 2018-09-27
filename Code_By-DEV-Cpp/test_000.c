#include <stdio.h>
int main()
{
	int a;
	printf("%d\n",(a=10,a+10,++a));
	printf("%d\n",a=10,a+10,++a);
	return 0; 
}
