#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// To return an Array we can send the { return of that array (say ans[]) } to the function
// and store the result in that array. Also we declare a array ans ast first which will be sending 
// and then print the value from that array.


// 1   2   3   4
// 5   6   7   8
// 9   10  11  12
// 13  14  15  16
// ----------------------
// 13   9   5   1
// 14  10   6   2
// 15  11   7   3
// 16  12   8   4

// // ----------  Brute  -------------------

// void rotate_matrix(int arr[10][10], int n, int ans[10][10]){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//            ans[j][n-1-i]  = arr[i][j];
//         }
//     }
// }
// // --------------------------------------------------------


// ---------- Better & Optimise-------------------------------

// 1   2   3   4
// 5   6   7   8
// 9   10  11  12
// 13  14  15  16
// ----------------------
// 13   9   5    | 1   5   9   13
// 14  10   6    | 2   6   10  14
// 15  11   7    | 3   7   11  15
// 16  12   8    | 4   8   12  16


void reverseRows(int arr[10][10], int n) {
    for (int i = 0; i < n; i++) {
        int start = 0;
        int end = n - 1;
        while (start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}


void transpose(int arr[10][10], int n, int ans[10][10]){
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
            // if(i == j)
            //     ans[i][j] = arr[i][j];
            // else
            //     ans[i][j] = arr[j][i];     
    //     }
    // }
            // **** OR **** in same array we save space.
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

        reverseRows(arr, n); 
}
// ----------------------------------------------------------------------------


int main()
{
    int n;
    cout<<"Size: ";
    cin>>n; 
    int arr[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j]; 
        }
    }
    
    int ans[10][10];
    // rotate_matrix(arr, n, ans);
    transpose(arr, n, ans); 

    cout<<"-----------"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout<<ans[i][j]<<" ";        // In case we temp arr 'ans[][]' to return value and print answer. 
            cout<<arr[i][j]<<" "; 
        }cout<<endl;
    }

  return 0;  
}
