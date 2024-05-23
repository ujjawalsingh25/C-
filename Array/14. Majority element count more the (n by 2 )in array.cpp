#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Size: 16
// 7 7 5 7 5 1 5 7 5 5 7 7 5 5 5 5
// 5

// int majority_element(vector<int> arr){
//     int n = arr.size();
//     int count=0, final_count =0, element;
//     for(int i=0;i<n;i++){
//         if(count == 0){
//             element = arr[i];
//             count++;
//         }
//         else if(arr[i] == element)
//             count++;
//         else if(arr[i] != element)
//             count--;
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i] == element)    final_count++;
//     }
//     if(final_count > n/2)   return element;
    
//     return -1;
// }


int majority_element_using_hashing(vector<int> arr){
    int n = arr.size();
    map <int, int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]] +=1;
    }
    for(auto iter: mp){
        if(iter.second > n/2)       return iter.first;
    }
    return -1;
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

    // int ans = majority_element(v);
    // cout<<ans<<endl;
    int ans2 = majority_element_using_hashing(v);
    cout<<ans2<<endl;
  return 0;  
}