#include <math.h> 
#include <stdio.h> 

void main() 
{ 
    int *a,n,i,j,pos,el;
 printf("Enter the number of elements: ");
 scanf("%d",&n);
 int arr[n+1];
 for(i=1;i<=n;i++)
 {
    printf("Enter element %d: \t", i);
    scanf("%d",&arr[i]);
 }
 printf("Enter element to be inserted: \t", el);
  scanf("%d",&el);
printf("Enter position to insert: \t", pos);
  scanf("%d",&pos);

if(pos<= n)
{
    printf("Elements after inserted:- \n");
 
for(i=1;i<=pos-1;i++)
    {
        printf("Element %d: \t%d \n", i,arr[i]);
    }printf("Element %d: \t%d(Added) \n", pos,el);
    for(i=pos;i<=n;i++)
    {
        printf("Element %d: \t%d \n", i+1,arr[i]);
    }
}
 else
 {
    printf("Can't Insert");
 } 
}