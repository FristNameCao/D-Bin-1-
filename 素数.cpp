#include<stdio.h>
#include<math.h>
void main()
{
	int i,j=0,k,n;
	for(n=1;n<=200;n=n+2)
	{
		k=sqrt(n);
		for(i=2;i<=k;i++)
		{
			if(n%i==0)
			break;
		}
			if(i>k)
			{
				printf("%4d",n);
				j++;
				if(j%10==0)
			printf("\n");
			}
		
			
		
	}
}