
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 1 2 3 0 0 4 0 5 0 0 0 6
// 1 2 3 4 5 6 0 0 0 0 0 0

void removeZero(int arr[], int n){
    int i = 0, count = 0, j;
    for(j=0; j<n; j++){
        if(arr[j]!= 0){
            arr[i] = arr[j];
            i++;
        }
        else
            count++;
    }
    for(int j=0; j<count; j++){
        arr[n-count + j] = 0;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// void swap(int &x, int &y){
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int *remove_zero(int arr[], int n){
//     int j=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             j=i;
//             break;
//         }
//     }
//     for(int i=j+1; i<n;i++){
//         if(arr[i] != 0){
//             swap(arr[i], arr[j]);
//                 j++;
//         }
//     }
//     return arr;
// }    

int main()
{
    int n, arr[10];
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    removeZero(arr, n);

    //  int *array = remove_zero(arr, n);
    // for(int i=0;i<n;i++){
    //     cout<<array[i]<<" ";
    // }


  return 0;  
}
