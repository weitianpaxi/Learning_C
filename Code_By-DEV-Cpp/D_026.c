#include <stdio.h>
double power(double a,double b);
int main()
{
	double a,b,c;
	scanf_s("%lf%lf",&a,&b);
	c=power(a,b);
	printf("%.0lf",c);
	return 0; 
}
double power(double a,double b)
{
	double d=1,i;
	for(i=b;i>0;i--)
	{
		d=d*a;
	}
	return (d);
 } 
