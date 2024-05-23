// 2 Sum
// ****** Set hash array always intialize to 0 and size carefully = (n-1 not n). ********

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Size: 5
// Target: 14
// 2 5 6 8 11
// Yes
// 6 + 8

// Time Complexity : O(N)  +  O(N logN) for sorting
// Space Complexity : O(1)

void twoSum_using_hashing(int arr[], int n, int target){
    int hasharr[arr[n-1]] = {0};
    int req_num=0;
    for(int i=0;i<n;i++){
        hasharr[arr[i]] += 1;
    }
    for(int i=0;i<n;i++){
        req_num = (target - arr[i]);
        if(hasharr[req_num] > 0 && arr[i] != req_num){
            cout<<"Yes";
            return;                
        }
    }
        cout<<"No"; 
}


void twoSum_using_twoPointer(int arr[], int n, int target){
    int low = 0, high = n-1;
    int sum = 0;
    while(low <= high){
        sum = arr[low] + arr[high];
        if(sum <= target)
            low++;
        else if(sum > target)
            high--;
    }cout<<arr[high]<<" "<<arr[low];
}

int main()
{
    int n, target;
    cout<<"Size: ";
    cin>>n;
    int arr[n];
    cout<<"Target: ";
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    twoSum_using_hashing(arr, n, target);
    twoSum_using_twoPointer(arr, n, target);

  return 0;
}