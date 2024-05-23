#include<iostream>
#include<vector>
using namespace std;

// Size: 4
// taget: 7 
// 2 3 6 7

void combinationSUM(vector<int> &arr, int index, vector<int> &ans, int target, vector<vector<int>> &result){
    int n = arr.size();
    if(index == n){
        if(target == 0){
                result.push_back(ans);
            }  
        return;
    }
    if(arr[index] <= target){
        ans.emplace_back(arr[index]);
        combinationSUM(arr, index, ans, target - arr[index], result);
        ans.pop_back();
    }
    combinationSUM(arr, index+1, ans, target, result);

}

int main()
{
    vector<int> v;
    vector<int> ans;
    vector<vector<int>> result;
    int n, data, target;
    cout<<"Size: ";
    cin>>n;
    cout<<"Target: ";
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>data;
        v.emplace_back(data);
    } cout<<"------"<<endl;

    combinationSUM(v, 0, ans, target, result);
     for (auto &iter : result) {
        for (int num : iter) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
