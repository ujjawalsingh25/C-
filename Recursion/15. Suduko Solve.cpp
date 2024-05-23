#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// 5 3 0 6 7 8 9 0 2
// 6 7 2 1 9 5 3 4 8 
// 0 9 8 3 4 2 5 6 7
// 8 5 9 7 6 1 4 2 3
// 4 2 6 8 5 3 7 9 1
// 7 1 3 9 0 4 8 5 6
// 9 6 0 5 3 7 2 8 4 
// 2 8 7 4 1 9 6 3 5
// 3 4 5 2 8 6 1 7 9

bool canPlace_digit(vector<vector<int>> &arr, int row, int col, int digit){
    for(int i=0;i<9;i++){
        if(arr[i][col] == digit)    return false;
        if(arr[row][i] == digit)    return false;
        if( arr [3 * (row/3) + i/3] [3 * (col/3) + i%3] == digit)   return false;
    }
  return true;
}

bool solve(vector<vector<int>> &arr){
    for(int row=0; row < 9; row++){
        for(int col=0; col < 9; col++){

            if(arr[row][col] == 0){
                for(int digit = 1; digit <= 9; digit++){
                    if(canPlace_digit(arr, row, col, digit)){
                        arr[row][col] = digit;
        
                        if(solve(arr) == true)   return true;
                        else    arr[row][col] = 0;
                    }
                }
              return false;  
            }
        }
    }
  return true;
}


int main() {
    vector<vector<int>> arr(9, vector<int>(9, 0));

    cout << "Enter data(9x9) with '0' for empty cells:" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }

    if (solve(arr)) {
        cout << "Solved Sudoku:" << endl;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
