#include<stdio.h>
void main(){
int a,b,c,beishu=0,a1,b1;
scanf("%d,%d",&a,&b);
a1=a;
b1=b;
while(c!=0)
{
c=a%b;
if(c==0)
{
beishu=a1*b1/b;
printf("���Լ����%d\n��С������%d",b,beishu);
}
else 
{
a=b;
b=c;
}

}
}