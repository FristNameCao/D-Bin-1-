#include<stdio.h>
void main(){
	int a[10]={2,4,6,8,3,1,10,9,5,7},i,t,j;
//	for(i=0;i<10;i++)
	//scanf("%d",&a[i]);

	for(i=0;i<10-1;i++)//扫描次数-1  比如1和2比较2.3 3.4 4.5 5.6 6.7 7.8 8.9一共八次
		for(j=0;j<10-i-1;j++)//每次排完循序就减去1，因为已经把最小的放在了最后面不需要再比较了
			if(a[j]>a[j+1]) //a[j]2和a[j+1]4比较  如果2大于4就把他们交换位置
		{
			t=a[j];  //2给t
			a[j]=a[j+1];//4给a[0]
			a[j+1]=t;//2给a[1]
		}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);//遍历输出
}