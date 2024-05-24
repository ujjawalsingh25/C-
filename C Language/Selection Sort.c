#include <stdio.h> 
#define MAX 5
void swap(int *xp, int *yp) 
{ 
 int temp = *xp; 
 *xp = *yp; 
 *yp = temp; 
} 
void selectionSort(int *arr, int n) 
{ 
 int i, j, min_idx; 
 for (i = 0; i < n-1; i++) 
 { 
 min_idx = i; 
 for (j = i+1; j < n; j++) 
 if (arr[j] < arr[min_idx]) 
 min_idx = j; 
 swap(&arr[min_idx], &arr[i]);
 } 
}
void printArray(int *arr, int size) 
{ 
 int i; 
 for (i=0; i < size; i++) 
 printf("%d ", arr[i]); 
 printf("\n"); 
} 
// Driver program to test above functions 
int main() 
{ 
 //int arr[] = {64, 25, 12, 22, 11}; 
 int arr[MAX];
    int n,i;
 printf("Enter the number of elements in array: ");
 scanf("%d",&n);
 printf("Enter the elements of array: \t");
 for(i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);
 }
 int m = sizeof(arr)/sizeof(arr[0]); 
 selectionSort(arr, m); 
 printf("Sorted array: \n"); 
 printArray(arr, m); 
 return 0; 
}