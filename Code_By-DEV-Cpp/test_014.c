#include  <stdio.h>

int main(void)
{
	int i,t,j,a[9]={1*8};
	for(i=0;i<8;i++)
		a[++i]=8-i++;
	for(j=0;j<8;++j)
		printf("%d",a[j]);
	printf("\n");
	//printf("a[%d]=%d\n",i-6,a[i-6]);

	
	return 0;
}
