#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Error in printing the data in answer. *********

// Size: 3
// 1 2 3
// 4 5 6
// 7 8 9
// -----------
// 1 2 3 
// 8 9 4
// 7 6 5


void spiral_form(vector<vector<int>> &arr, vector<int> & ans){
    int n = arr.size();          //  -> column
    int m = arr[0].size();      //   -> row
    
    int top=0, bottom=n-1;
    int left=0, right=m-1;

    while(left<=right && top<=bottom){
        for(int i=left; i<right; i++){
            ans.emplace_back(arr[top][i]);
        }
        top++;
        
        for(int i=top; i<bottom; i++){
            ans.emplace_back(arr[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i=right; i>=left; i--){
                ans.emplace_back(arr[bottom][i]);
            }
            bottom--;
        }
        if (left <= right){    
            for(int i=bottom; i>=top; i--){
                ans.emplace_back(arr[i][left]);
            }
            left++;
        }
    }
}

int main()
{
    vector<vector<int>> v;
    
    int n, col, idx=0;
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> row;
        for(int j=0;j<n;j++){
            cin>>col;
            row.push_back(col);
        }
        v.push_back(row);
    }
    vector<int> answer;
    spiral_form(v, answer);

    vector<vector<int>> spiral(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            spiral[i][j] = answer[idx++];
        }
    }

    cout << "-----------" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << spiral[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
