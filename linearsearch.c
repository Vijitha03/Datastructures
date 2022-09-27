#include<stdio.h>
int main(){
	int a[10],i,x,n;
	printf("no of elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the element ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
    if(a[i]==x)
	 break;
	 if(i<n)	
	 printf("element found at index %d",i);
	 else
	 printf("element not found");
	 return 0;
	 
}
SAMPLE OUTPUT
no of elements:5
enter the array elements:4
89
77
65
45
enter the element 45
element found at index 4
