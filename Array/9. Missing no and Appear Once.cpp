#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void appear_once(int arr[], int n) {
    int xorr = 0;
    for(int i=0; i<n;i++){
        xorr = xorr ^ arr[i];
    }
    cout<<xorr;
}

void missing(int arr[], int n){
    for(int i=arr[0]; i<arr[n-1]; i++){
        if(arr[i-arr[0]] != i){
            cout<<i<<endl;
            break;
        }
    }    
}

void missing_through_sum(int arr[], int n){
    int sum1 = 0, sum2 =0;
    for(int i=0;i<n;i++){
        sum1 += arr[i];
    }
    for(int i=1;i<=n+1;i++){           
        sum2 += i;
    }
    cout<< sum1<<" "<<sum2 << " "<< sum2- sum1;
}

void missing_through_hash(int arr[], int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i = 1; i <= n; i++){
        if(mp.find(i) == mp.end() || mp[i] == 0){
            cout<<i<< endl;
        }
    }
}

int main()
{
    int n, arr[10];
    cout << "Size: ";
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    // missing(arr, n);
    // missing_through_sum(arr, n);
    // missing_through_hash(arr, n);

    return 0;
}