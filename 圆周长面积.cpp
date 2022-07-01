#include<stdio.h>
#define p 3.1415
void main(){
	float c,r,s;
	printf("请输入半径\n");
	scanf("%f",&r);
	if(r>=0)
	{
		c=2*p*r;
	s=p*r*r;
	}
	printf("周长%0.2f\n面积%0.3f",c,s);
}