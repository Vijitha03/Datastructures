#include<stdio.h>
int main()
{
	 printf("NAME: YADDALA VIJITHA  REG.NO: -192124187");
     printf("\n");
int first=0, second=1, i, n, sum=0;
printf("Enter the number of terms: ");
scanf("%d",&n);

printf("Fibonacci Series:");
for(i=0 ; i<n ; i++)
{
if(i <= 1)
{
sum=i;
}

else
{
sum=first + second;
first=second;
second=sum;

}
printf(" %d",sum);
}
return 0;
}
SAMPLE OUTPUT
NAME: YADDALA VIJITHA  REG.NO: -192124187
Enter the number of terms: 6
Fibonacci Series: 0 1 1 2 3 5


