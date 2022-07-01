#include<stdio.h>
int x[100];/*x是全局变量，main函数和子函数都可以使用，用来存储斐波拉切数列每一项的值，以免反复调用子函数*/
int f(int n){
    if(n==1)
        return x[1]=0;
    else if(n==2)
        return x[2]=1;
    else if(n>2)
        return x[n]=x[n-1]+x[n-2];  /*当n大于2时，要得到斐波拉契数列的值，不需要反复调用子函数，只需要去数组x中取出曾算过的值*/
}

void main(){
    int n,i;/*n为要输出的个数，i是循环变量*/
    scanf("%d",&n);
    for(i=1;i<n+1;++i)/*循坏n次,不一定这样写，反正循环n次即可*/
        printf("%d ",f(i));  /*循环n次，得到从第一项到第n项斐波拉切数列的值，没算一个值输出一次，输出n个值*/
}
