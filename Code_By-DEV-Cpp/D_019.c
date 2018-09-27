#include <stdio.h>
#include <math.h>
void main()
{
	int n,i,k;
	printf("请输入一个数：\n");
	scanf("%d",&n);
	k=sqrt(n);
	for(i=2;i<k;i++){
		if(n%i==0){
			break;
		}	
	}
	if(i>k){
		printf("它是素数！"); 
	}
	else{
		printf("它不是素数！");
	}
}
