#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// 1 -->> Go
// 0 --> Not
// Size: 5
// 1 0 0 0 1
// 1 0 1 0 1
// 1 1 0 0 0
// 0 1 1 0 0
// 0 1 1 1 1
// --------
// DDRDDRRR
// DDRDRDRR

void findRat_Path(vector<vector<int>> &arr, int row, int col, int n, string path, vector<string> &result, vector<vector<bool>> &visited, int di[], int dj[]){
    if(row == n-1 && col == n-1){
        result.push_back(path);
        return;
    }
    string directions = "DLRU";
    for(int i=0;i<n;i++){
        int nextRow = row + di[i];
        int nextCol = col + dj[i];
        if (nextRow >= 0 && nextCol >= 0 && nextRow < n && nextCol < n && !visited[nextRow][nextCol] && arr[nextRow][nextCol] == 1){
            visited[nextRow][nextCol] =true;
            findRat_Path(arr, nextRow, nextCol, n, path + directions[i], result, visited, di, dj);
            visited[nextRow][nextCol] = false;
        }
    }
}


int main()
{
    vector<vector<int>> arr;
    vector<vector<bool>> visited;
    vector<string>result;
    int di[] = {1, 0, 0, -1};
    int dj[] = {0, -1, 1, 0};
    int n, col;
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> row;
        vector<bool> visRow(n, false);
        for(int j=0;j<n;j++){
            cin>>col;
            row.emplace_back(col);
        }
        arr.emplace_back(row);
        visited.emplace_back(visRow);
    }

    if(arr[0][0] == 1) {
        visited[0][0] = true;
        findRat_Path(arr, 0, 0, n, "", result, visited, di, dj);
    }
   cout << "--------" << endl;
    for (auto &path : result) {
        cout << path << endl;
    }

    return 0;
}


    

    