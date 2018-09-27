#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char a[]="\\'ABCD\''\'";
	n=strlen(a);
	printf("%4d\n",n);
	printf("%4d\n",sizeof(a));
	
	return 0;
}
