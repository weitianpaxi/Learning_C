# include <stdio.h>
# include <math.h>
void main()
{
	double n,Xn,Sn;
	Sn=0;
	for(n=1.0;n<=1000000;n++)
	{
		Xn=pow(-1,n+1)*1/(2*n-1);
		Sn=Sn+Xn;
	}
	printf("Pai=%20.19lf",Sn*4);
}
