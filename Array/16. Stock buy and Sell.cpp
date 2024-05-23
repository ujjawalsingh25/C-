#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 7 1 5 3 6 4

int stock(vector<int> &arr){
    int min_buy=arr[0], sell_time =0, profit=0, n=arr.size();
    for(int i=0;i<n;i++){
        sell_time = arr[i] - min_buy;
        profit = max(sell_time, profit);
        min_buy = min(min_buy, arr[i]);
    }
    return profit;
} 

int main()
{
    vector<int> v;
    int n,data;
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        v.emplace_back(data);
    }
    int ans = stock(v);
    cout<<ans<<endl;

  return 0;
}