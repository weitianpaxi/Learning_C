//test_018.c--Ñ}”µµÄËÄ„tß\Ëã¡£

#include <stdio.h>
struct Complex{
	double real;
	double imag;
}; 
struct Complex Input(void);
struct Complex Add(struct Complex x,struct Complex y);
struct Complex Sub(struct Complex x,struct Complex y);
struct Complex Mul(struct Complex x,struct Complex y);
struct Complex Div(struct Complex x,struct Complex y);
void Output(struct Complex x);

int main()
{
	while(1)
	{
		int n;
		struct Complex x,y,z;
		printf("Please choose which operation do you want to do:\n");
		printf("1.Addition\t 2.Subtraction\t\t 3.Multiplication\t 4.Division\t 5.Exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("Please input the first complex:\n");
				x=Input();
				printf("Please input the second complex:\n"); 
				y=Input();
				z=Add(x,y);
				Output(z);
				break;
			case 2:
				printf("Please input the first complex:\n");
				x=Input(); 
				printf("Please input the second complex:\n");
				y=Input();
				z=Sub(x,y);
				Output(z);
				break;
			case 3:
				printf("Please input the first complex:\n");
				x=Input(); 
				printf("Please input the second complex:\n");
				y=Input();
				z=Mul(x,y);
				Output(z);
				break;
			case 4:
				printf("Please input the first complex:\n");
				x=Input();
				printf("Please input the second complex:\n");
			 	y=Input();
				if(0==(y.real*y.real-y.imag*y.imag))
				{
					printf("Error!\n\nThe denominator cannot be zero.\n\n");
					break;
				}
				else
				{
					z=Div(x,y);
					Output(z);
					break;
				} 	
			case 5:
				printf("Thank you for using this program!\n\n\n");
				return 0;
			default :
				printf("\t\tError!\a\n\n\t\tThat's not a choise.\n\n\n");
		}
	}
}

struct Complex Input(void)
{
	struct Complex x;
	printf("Please input the real:");
	scanf("%lf",&x.real);
	printf("Please input the imag:");
	scanf("%lf",&x.imag);
	return x;
}
struct Complex Add(struct Complex x,struct Complex y)
{
	struct Complex z;
	z.real=x.real+y.real;
	z.imag=x.imag+y.imag;
	return z;
}
struct Complex Sub(struct Complex x,struct Complex y)
{
	struct Complex z;
	z.real=x.real-y.real;
	z.imag=x.imag-y.imag;
	return z;
}
struct Complex Mul(struct Complex x,struct Complex y)
{
	struct Complex z;
	z.real=x.real*y.real-x.imag*y.imag;
	z.imag=x.real*y.imag+x.imag*y.real;
	return z;
}
struct Complex Div(struct Complex x,struct Complex y)
{
	struct Complex z;
	z.real=(x.real*y.real+x.imag*y.imag)/(y.real*y.real-y.imag*y.imag);
	z.imag=(x.imag*y.real-x.real*y.imag)/(y.real*y.real-y.imag*y.imag);
	return z;
}
void Output(struct Complex x)
{
	printf("The answer is %.2lf + %.2lfi\n\n",x.real,x.imag);
}
