#include <stdio.h>
#include <math.h>
void main()
{
	int n,i,k;
	printf("������һ������\n");
	scanf("%d",&n);
	k=sqrt(n);
	for(i=2;i<k;i++){
		if(n%i==0){
			break;
		}	
	}
	if(i>k){
		printf("����������"); 
	}
	else{
		printf("������������");
	}
}
