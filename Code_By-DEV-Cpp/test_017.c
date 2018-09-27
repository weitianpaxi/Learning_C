//test_017.c--如果ABCDE*8=EDCBA，嘗試計算出A、B、C、D、E分別是多少？

#include <stdio.h>

int main()
{
	int a,b,c,d,e;
	for(a=1;a<=9;++a)
	{
		for(b=0;b<=9;++b)
		{
			for(c=0;c<=9;++c)
			{
				for(d=0;d<=9;++d)
				{
					for(e=0;e<=9;++e)
					{
						if((10000*a+1000*b+100*c+10*d+e)*8==(10000*e+1000*d+100*c+10*b+a))
						{
							printf("%d %d %d %d %d\n",a,b,c,d,e);
						}
						else
						{
						//	printf("Error!\n");
						}
					}
				}
			}
		}
	}
}
