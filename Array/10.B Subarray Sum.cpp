#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Size: 10
// Target: 3
// 1 2 3 -3 1 1 1 4 2 -3
// 8


int subarray_Sum(vector<int> &arr, int target){
  unordered_map<int, int> mp;
  int n =arr.size();
  int pre_sum=0, count=0, remove=0;
  mp[0] = 1;
  for(int i=0;i<n;i++){
    pre_sum += arr[i];
    remove = pre_sum - target;
    count += mp[remove];
    mp[pre_sum] += 1;  
  }
    return count;
}

int main()
{
    vector<int> v;
    int n, data,target;
    cout<<"Size: ";
    cin>>n;
    cout<<"Target: "; 
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>data;
        v.emplace_back(data);
    }

    int answer= subarray_Sum(v, target);
    cout<<answer<<endl;

  return 0;  
}