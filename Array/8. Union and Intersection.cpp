#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 1 1 2 3 5 6
// 2 3 4 4 5
// 1 2 3 4 5 6 

void unionArray_using_Set(int arr1[], int arr2[], int n1, int n2){
    set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        s.insert(arr2[i]);
    }
    for(auto it = s.begin(); it != s.end(); it++){
        cout<< *it<<" ";
    }
    
}

void unionArray(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0, k = 0;
    int temp[20], prev_val = -1;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j] && arr1[i] != prev_val) {
            temp[k++] = arr1[i];
            prev_val = arr1[i];
            i++;
        } 
        else if (arr1[i] > arr2[j] && arr2[j] != prev_val) {
            temp[k++] = arr2[j];
            prev_val = arr2[j]; // Update prev_val here
            j++;
        } 
        else {
            i++;  j++;      // Increment i or j when no valid element is chosen
        }
    }

    while (i < n1) {
        if (arr1[i] != prev_val) {
            temp[k++] = arr1[i];
            prev_val = arr1[i];
        }
        i++;
    }

    while (j < n2) {
        if (arr2[j] != prev_val) {
            temp[k++] = arr2[j];
            prev_val = arr2[j];
        }
        j++;
    }

    for (int i = 0; i < k; i++) {
        cout << temp[i] << " ";
    }
}

// ---------- Intersection ---------------
// 1 1 2 3 5 6 
// 2 3 4 4 5
// 2 3 5

void intersection(int arr1[], int arr2[], int n1, int n2){
    int i = 0, j = 0, k = 0;
    int temp[20], prev_val = -1;

    while (i < n1 && j < n2) {
        if(arr1[i] == arr2[j]){
            temp[k++] = arr1[i];
            i++; j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
    }
    for(int i=0; i<k;i++){
        cout<<temp[i]<<" ";
    }
}


int main() {
    int n1, n2, arr1[10], arr2[10];
    cout << "Size n1 and n2: ";
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    unionArray_using_Set(arr1, arr2, n1, n2);
    unionArray(arr1, arr2, n1, n2);

    intersection(arr1, arr2, n1, n2);

    return 0;
}
