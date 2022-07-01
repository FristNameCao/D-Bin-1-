#include<stdio.h>
int f(int n);/*该函数的返回值是斐波拉切数列第n项的值，输入一个n，得到第n项的值*/
void main(){
    int n,i;/*n为要输出的个数，i是循环变量*/
    scanf("%d",&n);
    for(i=1;i<n+1;++i)/*循坏n次,不一定这样写，反正循环n次即可*/
        printf("%d ",f(i));  /*循环n次，得到从第一项到第n项斐波拉切数列的值，每算一个值输出一次，输出n个值*/
}
int f(int n){  //f1=0
				//f2=1
				//f3=1
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else if(n>2)
        return f(n-1)+f(n-2);  /*当n大于2时，要得到斐波拉契数列的值，要继续反复调用f函数，这就是递归的典型特征，即反复调用一个函数*/
}