#include <stdio.h>
void max_min(int array[],int n);
void output(int array[],int n)
{
	int *p;
	for(p=array;p<array+n;p++)
	printf("%d",*p);
}
void input(int array[],int n)
{
	int *p;
	for(p=array;p<array+n;p++)
	scanf("%d",*p); 
}
int main()
{
	int number[10];
	input(number,10);
	max_min(number,10);
	output(number,10);
	return 0; 
}
void max_min(int array[],int n)
{
	int i,temp_max,temp_min;
	temp_max=array[0];
	for(i=0;i<10;i++)
	{
		if(array[i]>temp_max)
		temp_max=array[i]; 
	}
	temp_max=array[9];
	temp_min=array[0];
	for(i=0;i<10;i++)
	{
		if(array[i]<temp_min)
		temp_min=array[i];
	}
	temp_min=array[0];
}
