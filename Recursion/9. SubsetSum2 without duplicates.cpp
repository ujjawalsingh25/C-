#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Size: 6
// 1 2 2 2 3 3
// [], [1], [1,2], [1,2,2], [2], [2,2]

void subset_SUM(vector<int> &arr, int index, vector<int> &ans, vector<vector<int>> &result){
    int n = arr.size(); 
    if(ans.size() == 0) cout<<"{}";
    result.emplace_back(ans);
    
    for(int i=index; i<n; i++){
        if(i != index && arr[i] == arr[i-1])  continue;
        ans.push_back(arr[i]);
        subset_SUM(arr, i+1, ans, result);
        ans.pop_back();
    }
}

int main()
{
    vector<int> v;
    vector<int> ans;
    vector<vector<int>> result;
    int n, data, target;
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        v.emplace_back(data);
    } cout<<"------"<<endl;

    sort(v.begin(), v.end());
    subset_SUM(v, 0, ans, result);
     for (auto &iter : result) {
        for (int num : iter) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
