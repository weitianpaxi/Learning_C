#include <stdio.h>
#include <string.h>

int main(void)

{
	int * p,* q,n;
	char str[10]="ASDFGHJKLZ";//��̎���ַ����M�ĳ�ʼ�������ܽ����xֵ�Z�䣡 
	char s[6];
	strcpy(s,"ASDFGH");//�ַ����}�u�������������^�ļ���string.h"�С� 
	puts(str);
	printf("\n");
	puts(s);
	printf("\n"); 
	//   s="abcd";  [Error]������˵Ĳ����� ԭ��Ҋ�Pӛ�� 
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

