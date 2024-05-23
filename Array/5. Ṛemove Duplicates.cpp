#include<bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

void removeDuplicates_throughSet(int arr[], int n){
    set<int> s;
    for (int i = 0; i < n; i++) {
        // cin>>arr[i];
        s.insert(arr[i]);
    }

    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
}

int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}


int main() {
    int n;
    cout<<"Size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // removeDuplicates_throughSet(arr, n);

  int k = removeDuplicates(arr, n);
  
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
