#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//  -2 -3  4 -1 -2  1  5 -3 

int max_SubarraySum(vector <int> &arr){
    int sum =0, n=arr.size();
    long long max_sum = LONG_MIN;
    for(int i=0; i<n;i++){
        sum += arr[i];
        if(sum < 0){
            sum = 0;
        }
        else if(sum < max_sum){
            max_sum = sum;
        }
    }
    return max_sum;
}

 int maxSubArray_negative_also(vector<int>& arr) {
    int sum = 0, n = arr.size();
    int maxSum = INT_MIN;               // For negative (sum < 0) should be after (sum > maxsum)
    for (int i=0;i<n;i++) {                // both statement should be if rather than if and else if.
        sum += arr[i];
        if (sum > maxSum) {
            maxSum = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
 return maxSum;
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
    int ans = max_SubarraySum(v);
    cout<<ans<<endl;
    int ans = maxSubArray_negative_also(v);
    cout<<ans<<endl;

  return 0;
}