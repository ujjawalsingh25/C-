#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 9:
// 1 8 6 2 5 4 8 3 7

// int max_vol(int arr[], int n){
//     int vol=0;//, j=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             vol = max( vol , ( min(arr[i], arr[j]) ) * (j - i) );
//         }
//     }
//     return vol;
// }

int max_vol(int arr[], int n){
    int vol=0, store=0, low=0, high=n-1;

    while(low < high){
        vol = (min(arr[low], arr[high])) * (high - low);
        store = max(vol, store);
    
        if(arr[low] < arr[high])
            low++;
        else
            high--;
    }
  return store;
}

int main()
{
    int n,arr[20];
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = max_vol(arr, n);
    cout<<ans<<endl;

  return 0;
}