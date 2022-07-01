#include<stdio.h>
main(){
	int n=0,i;
	char ch[100];
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
			n=n+1;
		printf("%d",n);
}