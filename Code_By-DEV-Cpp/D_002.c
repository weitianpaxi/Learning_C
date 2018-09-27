# include <stdio.h>
#define PI 3.1415926
int main ()
{
	printf("这是一个关于圆的相关参数计算的程序！\n");
	double r,s,l;
	printf("请输入半径：\n");
	scanf("%lf",&r);
	s=PI*r*r;
	l=PI*2*r;
	printf("圆的面积是：%lf \n",s);
	printf("圆的周长是：%lf \n",l);
	system("pause");
	return 0; 	 
  }  
