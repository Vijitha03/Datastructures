#include<stdio.h>
#include<conio.h>
int insertarray(int arr[],int a,int key,int cap)
{
	 printf("NAME: YADDALA VIJITHA  REG.NO: -192124187");
         printf("\n"); 
	if(a>=cap)
	{
		return a;
	}
	else
	{
		arr[a]=key;
		return a+1;
	}
}
int main()
{
	
	int arr[10],i;
	int key=60,cap=sizeof(arr)/sizeof(arr[0]);
	int a=5;
	printf("enter the size of array",a);
	
	for(i=0;i<a;i++)
	{
		
		scanf("%d",&arr[i]);
		printf("enter array elements\n");
	}
	for(i=0;i<a;i++)
	{
		printf("%d ",arr[i]);
	}
	a=insertarray(arr,a,key,cap);
	printf("after insert");
	for(i=0;i<a;i++)
	{
		printf("%d ",arr[i]);
	}

}
SAMPLE OUTPUT;
"NAME: YADDALA VIJITHA  REG.NO: -192124187 

enter the size of array5
enter array elements
3
enter array elements
4
enter array elements
5
enter array elements
6
enter array elements
5 3 4 5 6 after insert5 3 4 5 6 33
