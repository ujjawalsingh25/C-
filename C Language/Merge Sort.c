#include <stdio.h>
#include<stdlib.h>
#define MAX 100
void merge_sort (int *, int , int );
void merging (int *, int, int, int );
void main( )
{
    int b[MAX];
    int n,i;
 printf("Enter the number of elements in array: ");
 scanf("%d",&n);
 printf("Enter the elements of array: \n");
 for(i=0;i<n;i++)
 {
    scanf("%d",&b[i]);
 }
 merge_sort(b, 0, n-1); 
 printf("\n Sorted List:\n");
 for(i=0; i<n; i++)
 printf("\t %d", b[i]);
}
void merge_sort (int *a, int left, int right)
{
 int mid;
 if (left != right)
 {
 mid= (left+right)/2;
 merge_sort (a, left, mid);
 merge_sort (a, mid+1, right);
 merging (a, left, mid, right);
 }
}

void merging (int *a, int left, int mid, int right)
{
 int i, j, aux[MAX], k=0;
 for (i= left, j=mid+1; i<=mid && j<=right; k++)
 {
 if (a[i]<a[j])
 aux[k]=a[i++];
 else
 aux[k]=a[j++]; 
 }
for ( ; i<=mid; i++)
 aux[k++]=a[i];
for ( ; j<=right; j++)
 aux[k++]=a[j];
for ( i=0; i<k; i++)
 a[left++]=aux[i];
}