#include <stdio.h>
int main()
{
	int n;
	void hannuobi(int n,char x,char y,char z);
	printf("please input the number of disk \n");
	scanf("%d",&n);
	hannuobi(n,'A','B','C');
	return 0; 	
 }
void hannuobi(int n,char x,char y,char z)
{
	void move(char x,char y);
	if(n==1)
	{
		move(x,z);
	}
	else
	{
	hannuobi(n-1,x,z,y);
	move(x,z);
	hannuobi(n-1,y,x,z);
	}	
 } 
 void move(char x,char y)
 {
 	printf("%c¡ª>%c \n",x,y);
 }
