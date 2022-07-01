#include<stdio.h>
void main()
{

int i,j=6,k,x,y=2,a,b,c;

for(i=0;i<4;i++)
{
    k=j;
    for(;k>0;--k)
        printf(" ");
	for(x=0;x<2*i+1;++x)
    {
        printf("*");
        printf(" ");
    }
	printf("\n");
	j-=2;
}
for(a=2;a>=0;a--)
{
	
	for(b=y;b>0;b--)
	{
	printf(" ");
	}
	for(c=0;c<2*a+1;c++)
{
	printf("*");
	printf(" ");
}
printf("\n");
y+=2;
}
}