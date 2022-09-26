#include<stdio.h>    
#include<stdlib.h>  
int main(){
printf("NAME: YADDALA VIJITHA  REG.NO: -192124187");
printf("\n");  
int a[10][10],b[10][10],mul[10][10],m,n,i,j,k;   
printf("enter the m value=");    
scanf("%d",&m);    
printf("enter the n value =");    
scanf("%d",&n); 
if(m!=n) 
printf("Invalid input\n");
else
printf("enter the first matrix element=\n");    
for(i=0;i<m;i++)    
{    
for(j=0;j<n;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix element=\n");    
for(i=0;i<m;i++)    
{    
for(j=0;j<n;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply of the matrix=\n");    
for(i=0;i<m;i++)    
{    
for(j=0;j<n;j++)    
{    
mul[i][j]=0;    
for(k=0;k<n;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}     
for(i=0;i<m;i++)    
{    
for(j=0;j<n;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}
SAMPLE INPUT :
NAME: YADDALA VIJITHA  REG.NO: -192124187
enter the m value=2
enter the n value =2
enter the first matrix element=
5
4
4
3
enter the second matrix element=
2
6
7
8
multiply of the matrix=
38      62
29      48
