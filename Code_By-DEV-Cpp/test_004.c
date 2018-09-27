#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	c=a=10,a+10,a+1;//单纯的只有赋值语句，第一个，后两句有值的变换但未有赋值操作！ 
	b=(a=10,a+10,a+1);//此语句的含义是把后方逗号表达式的值赋值给变量b。 
	printf("c=%d\n\n",c);
	printf("b=%d\n\n",b);
	printf("未加括号：%d\n\n",a=10,a+10,a+1);//单纯的只有赋值语句，第一个，后两句有值的变换但未有赋值操作！ 
	printf("加了括号：%d\n\n",(a=10,a=10,a+1));//此语句的含义是把后方逗号表达式的值输出。 
	
	return 0;
}
