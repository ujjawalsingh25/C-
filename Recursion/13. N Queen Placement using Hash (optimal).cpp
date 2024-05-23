// f
#include <iostream>
#include <vector>
using namespace std;


void solveNQueens(vector<vector<int>> &arr, int row, int n, vector<vector<vector<int>>> &result,
 vector<int> &upperDiagonal,vector<int> &lowerDiagonal, vector<int> &leftRow) {
    if (row == n) {
        result.push_back(arr);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (leftRow[col] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + (col - row)] == 0) {
            
            arr[row][col] = 5;
            
            leftRow[col] = 1;
            lowerDiagonal[row + col] =1;
            upperDiagonal[(n-1) + (col - row)] = 1;
            
            solveNQueens(arr, row + 1, n, result, upperDiagonal, lowerDiagonal, leftRow);
            arr[row][col] = 0;

            leftRow[col] = 0;
            lowerDiagonal[row + col] = 0;
            upperDiagonal[(n-1) + (col - row)] = 0;
        }
    }
}


int main() {
    int n,col;
    cout << "Size: ";
    cin >> n;

    // vector<vector<int>> v;//chessboard(n, vector<int>(n, 0));
    vector<vector<vector<int>>> result;
    vector<int> leftRow(n,0);
    vector<int> upperDiagonal(2*n-1 , 0);
    vector<int> lowerDiagonal(2*n-1 , 0);
    
    vector<vector<int>> v(n, vector<int>(n, 0));
    // for(int i=0;i<n;i++){
    //     vector<int> row;
    //     for(int j=0;j<n;j++){
    //         cin>>col;
    //         row.emplace_back(col);
    //     }
    //     v.emplace_back(row);
    // }

    solveNQueens(v, 0, n, result, upperDiagonal, lowerDiagonal, leftRow);

    cout << "Total Solutions: " << result.size() << endl;
    for (const auto &result : result) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // cout <<result[i][j]<<" "; //result[i][j] == 5 ? 'Q' : '.') << " ";
                cout<<(result[i][j] == 5 ? 'Q' : '.') << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
