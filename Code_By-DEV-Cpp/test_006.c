#include <stdio.h>
#include <string.h>

int main(void)

{
	int * p,* q,n;
	char str[10]="ASDFGHJKLZ";//此處為字符數組的初始化，不能叫做賦值語句！ 
	char s[6];
	strcpy(s,"ASDFGH");//字符串複製函數，包含在頭文件“string.h"中。 
	puts(str);
	printf("\n");
	puts(s);
	printf("\n"); 
	//   s="abcd";  [Error]不能如此的操作！ 原因見筆記。 
	printf("%2d\n",sizeof(*p)); 
	printf("%2d\n",sizeof(short int));
	printf("%2d\n",sizeof(int));
	printf("%2d\n",sizeof( long int));
	printf("%2d\n",sizeof(long long int));
	printf("%2d\n",sizeof(char));
	printf("%2d\n",sizeof(float));
	printf("%2d\n",sizeof(double));
	printf("%2d\n",sizeof(long double));
	
	return 0;
} 

