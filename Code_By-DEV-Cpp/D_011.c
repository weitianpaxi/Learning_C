#include <stdio.h>
#include <stdlib.h>
main()
{
int a, b; 
printf ("�������������֣�\n"); 
scanf("%d%d",&a,&b);
if(a!=250)
{
	printf ("���Ǹ�ɵ�ƣ�\n"); 
}
else
{
	a=a+1;
}
while (b<100)
{
	b=(2*b)+1;
	printf ("b=%d\n",b+a);
}
 system ("pause"); 
}
  
