
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 3 1 -2 -5 2 -4
// 1 2 3 -2 -4 -5

void unequal_rearrange(int arr[], int n){
//   int pos[n], neg[n];
    vector<int> pos,neg;
  int k=0, pos_index=0, neg_index=0;
  for(int i=0;i<n;i++){
    if(arr[i]>0){
      pos.push_back(arr[i]);
    }
    else{
      neg.push_back(arr[i]);
    }
  }
  
  int n1 = pos.size();
  int n2 = neg.size();
  
  while(pos_index < n1 && neg_index < n2){
    arr[k++] = pos[pos_index++];
    arr[k++] = neg[neg_index++];
  }
     while (pos_index < n1) {
        arr[k++] = pos[pos_index++];
    }

    while (neg_index < n2) {
        arr[k++] = neg[neg_index++];
    }


  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}



// -------Brute -------
// void rearrange(int arr[], int n){
//     int pos[n/2], neg[n/2];
//     int pos_k=0, neg_k=0;
//     for(int i=0;i<n;i++){
//         if(arr[i] > 0){
//             pos[pos_k++] = arr[i];
//         } 
//         else{
//             neg[neg_k++] = arr[i];
//           }
//     }
    
//     for(int i=0;i<n/2;i++){
//         arr[2*i] = pos[i];
//         arr[(2*i)+1] = neg[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// } 


int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // rearrange(arr, n);
    unequal_rearrange(arr, n);
    
  return 0;
}