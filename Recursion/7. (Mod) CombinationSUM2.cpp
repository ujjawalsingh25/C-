#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Size: 5
// taget: 4 
// 1 1 1 2 2

void combinationSUM(vector<int> &arr, int index, vector<int> &ans, int target, vector<vector<int>> &answer){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    // if(index == n){
        if(target == 0){
                answer.push_back(ans);
            }  
        return;
    // }
    for(int i = index; i<n;i++){
        if(i > index && arr[i] == arr[i-1]) continue;
        if(arr[i] > target) break;
        ans.emplace_back(arr[i]);  
        combinationSUM(arr, i+1, ans, target - arr[i], answer);    
        ans.pop_back();
    }
    // if(arr[index] <= target){
    //     ans.emplace_back(arr[index]);
    //     combinationSUM(arr, index+1, ans, target - arr[index], answer);
    //     ans.pop_back();
    // }
    // combinationSUM(arr, index+1, ans, target, answer);

}

int main()
{
    vector<int> v;
    vector<int> ans;
    vector<vector<int>> answer;
    int n, data, target;
    cout<<"Size: ";
    cin>>n;
    cout<<"Target: ";
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>data;
        v.emplace_back(data);
    } cout<<"------"<<endl;

    combinationSUM(v, 0, ans, target, answer);
     for (auto &iter : answer) {
        for (int num : iter) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
