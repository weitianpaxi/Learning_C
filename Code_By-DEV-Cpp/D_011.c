#include <stdio.h>
#include <stdlib.h>
main()
{
int a, b; 
printf ("请输入两个数字：\n"); 
scanf("%d%d",&a,&b);
if(a!=250)
{
	printf ("你是个傻逼！\n"); 
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
  
