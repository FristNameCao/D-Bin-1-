#include<stdio.h>
void main(){
	int k=-1,i,j,a[10]={1,2,3,4,5,6,7,8,9,10},del;
	scanf("%d",&del);
	for(i=0;i<10;i++)
	{
		if(a[i]==del)
		{
			k=i;
			break;
		}
	
	}
	
		if(k!=-1)
	{
		for(j=k;j<10;j++)
		{
			a[j]=a[j+1];
		}
	
		for(i=0;i<10-1;i++)
		{
			printf("%d ",a[i]);
		}
	}
		else 
		{
			printf("找不到该数不能删除");
		}
	
	
}