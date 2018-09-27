#include <stdio.h>
int main()
{
	int i,j,k,n;
	for(i=1;i<10;i++)
		for(j=0;j<10;j++)
			for(k=0;k<10;k++)
			{
				n=100*i+10*j+k;
				if(i*i*i+j*j*j+k*k*k==n)
				{
					printf("%d\n",n);
				}
			}
	return 0;
}
