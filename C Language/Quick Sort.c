#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void swap(int *a,int i, int j)
{
 int t=a[i];
 a[i]=a[j];
 a[j]=t; 
}
void rec_quick_sort(int *a, int left, int right)
{
 int i, last;
 if(left>=right) return;
 last = left;
 swap(a, left,(left+right)/2);
 for(i=left+1; i<=right; i++)
 if(a[left] > a[i])
 swap(a, ++last, i);
 swap(a, last, left);
 rec_quick_sort(a, left, last-1);
 rec_quick_sort(a, last+1, right);
 }
 void display(int *a,int n)
{
int i;
printf("\n List of elements:\n"); 
for(i=0;i<n;i++)
 printf("%d, ",a[i]); 
printf("\n");
}
void main()
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
 
 rec_quick_sort(b,0,i-1);
 display(b,i);
}