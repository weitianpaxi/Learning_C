/*
	求前20的階乘和！ 
*/ 
#include <stdio.h>

double f(double n)
{
	if(n==1||n==0)
		return (1);
	else
		return (f(n-1)*n);
}
int main(void)
{
	int i;
	double sum=0,temp;
	char c='a';
	for(i=0;i<=20;i++)
	{
		temp=f(i);
		sum=sum+temp; 
	}
	printf("%.0lf\n",sum);
	printf("%d",c);
	
	return 0;
 } 
 
 /*
 在Dev-cpp 裏的運行結果是
 —————————————————————————————— 
 2561327494111820300
97
--------------------------------
Process exited after 0.08432 seconds with return value 0
请按任意键继续. . .
 —————————————————————————————— 
 */
