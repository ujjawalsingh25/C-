#include <iostream>
#include <vector>
using namespace std;

Size: 4
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0
Total Solutions: 2
. Q . .
. . . Q
Q . . .
. . Q .

. . Q .
Q . . .
. . . Q
. Q . .

bool safePlace(vector<vector<int>> &arr, int n, int row, int col) {
    // Check if there's a queen in the same column
    for (int i = 0; i < row; i++) {
        if (arr[i][col] == 5)
            return false;
    }

    // Check the upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (arr[i][j] == 5)
            return false;
    }

    // Check the upper right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (arr[i][j] == 5)
            return false;
    }

    return true;
}

void solveNQueens(vector<vector<int>>& arr, int row, int n, vector<vector<vector<int>>>& result){
    if(row == n){
        result.push_back(arr);
        return;
    }
    for(int col = 0; col < n; col++){
        if(safePlace(arr, n, row, col)){
            arr[row][col] = 5;
            solveNQueens(arr, row+1, n, result);
            arr[row][col] = 0;
        }
    }

}

int main() {
    int n, col;
    cout << "Size: ";
    cin >> n;

    vector<vector<vector<int>>> result;
    vector<vector<int>> v(n, vector<int>(n, 0));    // -->> Already initialize with all 0.
    // vector<vector<int>> v;
    
    // for(int i=0;i<n;i++){
    //     vector<int> row;
    //     for(int j=0;j<n;j++){
    //         cin>>col;
    //         row.emplace_back(col);
    //     }
    //     v.emplace_back(row);
    // }

    solveNQueens(v, 0, n, result);

    cout << "Total Solutions: " << result.size() << endl;
    for (const auto &result : result) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // cout <<result[i][j]<<" ";//<<(result[i][j] == 5 ? 'Q' : '.') << " ";
                cout<<(result[i][j] == 5 ? 'Q' : '.') << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
