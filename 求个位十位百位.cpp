
#include<stdio.h>
void main(){
	int g,s,b,sum;
	scanf("%d",&sum);
	g=sum%10;
	s=sum/10%10;
	b=sum/100;
	printf("��λ%d\nʮλ%d\n��λ%d",g,s,b);
}