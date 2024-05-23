// Dutch Nation Flag Algorithm
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 0 1 1 0 1 2 1 2 0 0 0
// 0 0 0 0 0 1 1 1 1 2 2

void sort012(int arr[], int n){
  int low = 0, mid = 0, high = n-1;
  while(mid <= high){
      if(arr[mid] == 0){
        swap(arr[mid], arr[low]);
        low++;    mid++; 
      }
      else if(arr[mid] == 1){
        mid++;
      }
      else if(arr[mid] == 2){
        swap(arr[mid], arr[high]);
        high--;
      }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}


int main()
{
    int n, target;
    cout<<"Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr, n);

  return 0;
}