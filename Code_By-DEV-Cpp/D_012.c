# include <stdio.h>
# include <math.h>
main()
{
	double a,b,c,d,e,f,g;
	printf("���������뷽�̵�����ϵ�� ��\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-(4*a*c);
	g=pow(d,1/2);
	if(d<0)
	{
		printf("�˷��̲�����ʵ���⣡����"); 
	}
	else if(d==0)
	{
		printf ("X1=X2=%lf",(-b)/2*a);	
	}
	else if(d>0)
	{
		e=((-b)+g)/2*a;
		f=((-b)-g)/2*a;
		printf("X1=%lf\nX2=%lf\n", e,f);
	}
	system("pause");
} 
