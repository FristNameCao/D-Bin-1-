#include "stdio.h"

int f(int a)
{
	int b=0;
	static int c=3;
	a=c++,b++;
		printf("b��%d,c��%d",b,c);
	return(a);
}
	int main(void)
	{
		int a=2,i,k;
		for(i=0;i<2;i++)
		{
			printf("a��%d\n",a);
			k=f(a++);
			
		}
		printf("father��%d\n",a);
		printf("k��%d\n",k);
		return 0;
	}