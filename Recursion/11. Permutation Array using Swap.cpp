// 9
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Size: 3
// 1 2 3


void permutation(vector<int> &arr, int index,  vector<vector<int>> &result){
    int n = arr.size(); 
    if(index == n){
        result.push_back(arr);
        return;
    }
    for(int i=index;i<n;i++){
        swap(arr[i], arr[index]);
        permutation(arr, index+1, result);
        swap(arr[i], arr[index]);
    }
}

int main()
{
    vector<int> v;
    vector<int> ans;
    vector<vector<int>> result;
    int n, data, sum=0;
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        v.emplace_back(data);
    } cout<<"------"<<endl;

    permutation(v, 0, result);
     for (auto &iter : result) {
        for (int num : iter) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
