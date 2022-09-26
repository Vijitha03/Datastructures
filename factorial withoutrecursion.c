#include<stdio.h>
int main(){
	printf("NAME: YADDALA VIJITHA  REG.NO: -192124187");
    printf("\n"); 
	int i,f=1,num;
	printf("enter any number:");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	f=f*i;
	printf("%d!=%d\n",num,f);
	return 0;
}


sample output:
	
NAME: YADDALA VIJITHA  REG.NO: -192124187
enter any number:12
12!=479001600
	
