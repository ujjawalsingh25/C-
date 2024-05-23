#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<unordered_set>
using namespace std;

// Longest Consecutive Sequence
// https://leetcode.com/problems/longest-consecutive-sequence/submissions/

// 102 4 100 1 101 3 2 1 1
// 1 1 2 3 4 100 101 102

int largest_consecutive_seq(vector<int> &arr){
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto iter: st)
}







// int largest_consecutive_seq(vector<int> &arr){
//     sort(arr.begin(), arr.end());
//     int count = 0, current_count = 0, n=arr.size();
//     int  maxSeq_count = 1, prev_element= INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i] == prev_element)
//             continue;
//         else if(arr[i] -1 == prev_element){
//             prev_element = arr[i];
//             current_count +=1;
//         }
//         else if(arr[i]-1 != prev_element){
//             current_count=1;
//             prev_element = arr[i];
//         }
//         maxSeq_count = max(maxSeq_count, current_count);
//     }
//     return maxSeq_count;
// }

int main() {
    int n, data;
    cout << "Size: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> data;
        v.emplace_back(data);
    }

    int ans =  largest_consecutive_seq(v);
    cout<<ans<<endl;
    return 0;
}
