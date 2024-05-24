#include <math.h> 
#include <stdio.h> 
#define MAX 10

void insertionSort(int *arr, int n) 
{ 
 int i, key, j; 
 for (i = 1; i < n; i++) 
 { 
 key = arr[i]; 
 j = i - 1; 
 while (j >= 0 && arr[j] > key) { 
 arr[j + 1] = arr[j]; 
 j = j - 1; 
 } 
 arr[j + 1] = key; 
 }
 } 
void printArray(int arr[], int n) 
{ 
 int i; 
 for (i = 0; i < n; i++) 
 printf("%d ", arr[i]); 
 printf("\n"); 
}
int main() 
{ 
    int n,i;
    
 printf("Enter the number of elements in array: ");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the elements of array: \t");
 for(i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);
 }
 int m = sizeof(arr) / sizeof(arr[0]); 
 printf("\n Content of the array before sorting:\n"); 
 printArray(arr, m); 
 
 insertionSort(arr, m);
 printf("\n Content of the array after sorting:\n"); 
 printArray(arr, m); 
 return 0; 
}