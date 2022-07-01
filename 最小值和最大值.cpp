#include<stdio.h>
main(){
int i,a[4],min,max;
for(i=0;i<4;i++)

	scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(i=0;i<4;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
		printf("最小数%d\n最大数%d",min,max);
		
}