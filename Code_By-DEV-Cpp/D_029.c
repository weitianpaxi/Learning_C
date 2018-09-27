#include <stdio.h>
void word(char s[]);
int main()
{
	int i;
	char str[80],c;
	printf("Pleae input strings:\n");
	for(i=0;i<=80;i++)
	{
		c=str[i];
		if(c=='\n')
		break;
		scanf("%c",&str[i]);
		
	}
	word(str);
	return 0;
}
void word(char s[])
{
	int i;
	for(i=0;i<=80;i++)
	{
		char c;
		c=s[i];
		printf("%c",s[i]);
		if(c==' ')
		printf("\n");
	}
 } 
