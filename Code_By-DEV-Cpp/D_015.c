   # include <stdio.h>
int main()
{
	int n,i;
	for(n=101;n<200;n+=2)
	{
		for(i=2;i<n;i++){
			if(n%i==0) break;
		}
		if(i==n){
			if(i%6==0) printf("\n");
			printf("%13d",n);
		}
	}
	printf("\n");
	return 0;
}
