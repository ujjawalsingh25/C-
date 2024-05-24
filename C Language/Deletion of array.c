#include <math.h> 
#include <stdio.h> 
#define MAX 10


void main() 
{ 
    int n,i,j,pos;
 printf("Enter the number of elements: ");
 scanf("%d",&n);
 int arr[n];
 for(i=1;i<=n;i++)
 {
    printf("Enter element %d: \t", i);
    scanf("%d",&arr[i]);
 }
 printf("Enter element no. to be deleted: \t", pos);
  scanf("%d",&pos);
if(pos < 0 || pos > n)
{
   printf("Can't Delete");
}
 else
 {
   for(i=pos;i<n;i++)
      {
         arr[i]=arr[i+1];
      }
} printf("Elements after deleted:- \n");
 for(i=1;i<=n-1;i++)
 {
    printf("Element %d: \t%d \n", i,arr[i]);

 }
 }