#include <stdio.h>
int main()
{
 printf("NAME: YADDALA VIJITHA  REG.NO: -192124187");
 printf("\n"); 
int i, low, high, mid, n, key, array[100];
printf("Enter number of elements :");
scanf("%d",&n);
printf("Enter %d integers:", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to find:");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list",key);
return 0;
}

SAMPLE OUTPUT:
Yaddala Vijitha -Reg no.192124187

Enter number of elements :10
Enter 10 integers:2
3
4
5
6
7
8
9
11
23
Enter value to find:6
6 found at location 5
