
#include<stdio.h>
void main(){
	int g,s,b,sum;
	scanf("%d",&sum);
	g=sum%10;
	s=sum/10%10;
	b=sum/100;
	printf("个位%d\n十位%d\n百位%d",g,s,b);
}