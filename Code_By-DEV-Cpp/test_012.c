#include <stdio.h>
/*
int f(char s[])
{
	int i=0;
	while(s[i++] != '\0');
	return (i-1);
}
int main()
{
	printf("%4d\n",f("goodbey!"));
	
	return 0;
}*/
int f(int a)
{
	int b=0;
	static int c=3;
	a=c++,b++;
	return(a); 
}
void main()
{
	int a=2,i,k;
 	for(i=0;i<3;i++)
    {
		a++;
		k=f(a);/*k=++a;*/
	}
  printf("%d\n",k);  
}

