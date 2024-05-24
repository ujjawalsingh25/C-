#include <math.h> 
#include <stdio.h> 
#define MAX 10


void main() 
{ 
    int n,i,j;
    int *ptr;
 printf("Enter the number of elements: ");
 scanf("%d",&n);
 int arr[n];
 ptr = &arr[0];
 for(j=1;j<=n;j++)
 {
    printf("Enter element %d: \t", j);
    scanf("%d",ptr);
    ptr++;
 }

 ptr = &arr[n-1];
 printf("Reversed elements of array:- \n");
for(j=n;j>=1;j--)
 {
   printf("Element %d: %d \t\n",j,*ptr);
    ptr--;
 }
}