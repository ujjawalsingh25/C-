#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Size: 3
// 3 1 2 
// 0 1 2 3 3 4 5 6

void subset_SUM(vector<int> &arr, int index, int sum, vector<int> &result){
    int n = arr.size();
    if(index == n){
        result.push_back(sum);
        return;
    } 
    // Pick the element.
    subset_SUM(arr, index+1, sum + arr[index] , result);   // -->> index increase and sum include element
    
    // Don't Pick the element.
    subset_SUM(arr, index+1,  sum , result);    // -->> index increase but sum do not include element
}

int main()
{
    vector<int> v, result;
    int n, data, sum=0;
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        v.emplace_back(data);
    } cout<<"------"<<endl;

    subset_SUM(v, 0, sum, result);
    sort(result.begin(), result.end());
    for (auto &iter : result) {
        cout << iter << " ";
    }
    cout << endl;

    return 0;
}
