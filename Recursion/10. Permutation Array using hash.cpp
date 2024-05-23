#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Size: 3
// 1 2 3 


void permutation_Array(vector<int> &arr, vector<int> &ans, vector<bool> used, vector<vector<int>> &result){ 
    if(ans.size() == arr.size()){
        result.push_back(ans);
        return;
    }
    for(int i=0;i<arr.size();i++){
        if(!used[i]){
            ans.emplace_back(arr[i]);
            used[i] =1;
            permutation_Array(arr, ans, used, result);
            ans.pop_back();
            used[i] =0;
        }
    }
}

int main()
{
    vector<int> v;
    vector<int> ans;
    vector<vector<int>> result;
    int n, data, count[10];
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        v.emplace_back(data);
    } cout<<"------"<<endl;

    vector<bool> used(n, false); // To keep track of used elements

    sort(v.begin(), v.end());
    permutation_Array(v, ans, used, result);
     for (auto &iter : result) {
        for (int num : iter) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
