#include <stdio.h>
int average_num(int a[],int n);
int main()
{
	int n,a[10],i,num;
	printf("请输入数量：");
	scanf("%d",&n);
	printf("请输入数据：\n");
	for(i=0;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	num=average_num(a,n);
	printf("the sum is %d\n",num);
	return 0;
}
int average_num(int a[],int n)
{
	int sum=0,i,ave,num=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	ave=sum/n;
	for(i=0;i<=n;i++)
	{
		if(a[i]<ave)
		num++;
	}
	return (num);
	
}
