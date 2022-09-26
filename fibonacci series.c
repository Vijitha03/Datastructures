#include<stdio.h>    
int main()    
{    
 printf("NAME: YADDALA VIJITHA  REG.NO: -192124187");
 printf("\n");
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);    
 for(i=2;i<number;++i)   
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }  
SAMPLE OUTPUT:
NAME: YADDALA VIJITHA  REG.NO: -192124187
Enter the number of elements:4

0 1 1 2

