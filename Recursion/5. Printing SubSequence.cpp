#include<iostream>
#include<vector>
using namespace std;

// Time Complexity = 2^n

// 3 1 2
// 3 1
// 3 2 
// 3
// 1 2 
// 1 
// 2
// {}

void subsequence(vector<int> &arr, int index, vector<int> &ans, int n){
    n = arr.size();
    // vector<int> ans;
    if(index == n){
        if(ans.size() == 0)  cout<<"{}";
        for(auto iter : ans){           // Since alternate number of data (as adding or removing so number change.)
            cout<<iter<<" ";
        }  cout<<endl;
        return;
    }
    ans.push_back(arr[index]);
    subsequence(arr, index+1, ans, n);
    ans.pop_back();
    subsequence(arr, index+1, ans, n);
    
}

int main()
{
    vector<int> v;
    vector<int> ans;
    int n, data;
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        v.emplace_back(data);
    } cout<<"------"<<endl;
    subsequence(v, 0, ans, n);

    return 0;
}