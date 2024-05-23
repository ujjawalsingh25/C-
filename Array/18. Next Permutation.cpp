#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 2 3 5 4 1 0 0
// Time Complexity : 0(3N)

void nextPermutation(vector<int>& arr) {
    int peak = -1, n = arr.size();
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            peak = i;
            break;
        }
    }
    for (int i = n - 1; i >= peak && peak != -1; i--) {
        if (arr[i] > arr[peak]) {
            swap(arr[i], arr[peak]);
            break;
        }
    }
    reverse(arr.begin() + peak + 1, arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main() {
    int n, data;
    cout << "Size: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> data;
        v.emplace_back(data);
    }

     nextPermutation(v);
    
    return 0;
}
