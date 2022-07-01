#include<stdio.h>
void main()
{
	int i,j,a,b;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++) 
		{
			printf("*");
			printf(" ");
			
		}
		printf("\n");
	}
	for(a=3;a>0;a--)
	{
		for(b=0;b<a;b++)
		{
		printf("*");
		printf(" ");
		}
		printf("\n");

}
}