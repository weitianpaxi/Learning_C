# include <stdio.h>
#define PI 3.1415926
int main ()
{
	printf("����һ������Բ����ز�������ĳ���\n");
	double r,s,l;
	printf("������뾶��\n");
	scanf("%lf",&r);
	s=PI*r*r;
	l=PI*2*r;
	printf("Բ������ǣ�%lf \n",s);
	printf("Բ���ܳ��ǣ�%lf \n",l);
	system("pause");
	return 0; 	 
  }  
