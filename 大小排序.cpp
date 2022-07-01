#include "stdio.h"

int f(int a)
{
	int b=0;
	static int c=3;
	a=c++,b++;
		printf("b是%d,c是%d",b,c);
	return(a);
}
	int main(void)
	{
		int a=2,i,k;
		for(i=0;i<2;i++)
		{
			printf("a是%d\n",a);
			k=f(a++);
			
		}
		printf("father是%d\n",a);
		printf("k是%d\n",k);
		return 0;
	}