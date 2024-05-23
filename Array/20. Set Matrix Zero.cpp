#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Size: 4
// 1 1 1 1 
// 1 0 1 1
// 1 1 0 1
// 1 0 0 1
// -----------
// 1 0 0 1
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0



// //   --------  Brute  ------------------------------

// void makeROW_zero(int arr[10][10], int n, int i) {
//     for(int j = 0; j < n; j++) {
//         if(arr[i][j] != 0){
//             arr[i][j] = 5;
//         }
//     }
// }

// void makeCOLUMN_zero(int arr[10][10], int n, int j) {
//     for(int i = 0; i < n; i++) {
//         if(arr[i][j] != 0){
//             arr[i][j] = 5;
//         }
//     }
// }

// void set_matrix_zero(int arr[10][10], int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j] == 0){
//                 // arr[i][j] =5;
//                 makeROW_zero(arr, n, i);
//                 makeCOLUMN_zero(arr, n, j);
//             } 
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j] == 5){
//                 arr[i][j] = 0;
//             } 
//         }
//     }
// }
// -------------------------------------------------------------


// //   --------  Better  ------------------------------

// void set_matrix_zero(int arr[10][10], int n){
//     int row[n]={0}, col[n]={0};
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j] == 0){
//                 row[i] = 1;
//                 col[j] = 1;
//             } 
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(row[i] || col[j]){
//                 arr[i][j] = 0;
//             } 
//         }
//     }
// }
// -------------------------------------------------------------

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
    
    // set_matrix_zero(arr, n);

    cout<<"-----------"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" "; 
        }cout<<endl;
    }

  return 0;  
}