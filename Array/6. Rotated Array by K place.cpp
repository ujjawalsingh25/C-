#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4 5 6 7 8
// 4 5 6 7 8 1 2 3

// Time Complexity = O(place) + O(n - place) + O(place) = O (n + places) // for using given array and temp array
// Space Complexity = O(places)    // for using temp array

void k_PlaceRotation(int arr[], int n, int place){
    int temp[n];
    place = place % n;          // If there will be multiple or array rotation repeated.

    for(int i=0; i<place; i++){
        temp[i] = arr[i];
    }
    for(int i=place; i<n; i++){
       arr[i-place] = arr[i];
    }
    for(int i = n-place; i<n; i++){
        arr[i] = temp[i - (n-place)];
    }
}

// Time Complexity = O(place) + O(n - place) + O(n) = O (2n)       // Increased w.r.t prev
// Space Complexity = O(0)    // Since no temp array or any other space required.

void k_PlaceRotation_using_reverse(int arr[], int n, int place){
    reverse(arr, arr + place);
    reverse(arr + place, arr + n);
    reverse(arr, arr + n);
}

// Right rotation
void rightRotation(int arr[], int n, int place){
    int temp[place];
    for(int i=0; i< place; i++){
        temp[i] = arr[i];
    }
    for(int i=place; i< n ;i++){
        arr[i - place] = arr[i];
    }
    for(int i = n-place; i<n; i++){
        arr[i] = temp[i- (n-place)];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n, place;
    cout<<"Size: ";
    cin>>n;
    cout<<"Place_index: ";
    cin>>place;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Using linear method: ";
    k_PlaceRotation(arr, n, place);
    cout<<"Using reverse method: ";
    k_PlaceRotation_using_reverse(arr, n, place);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

  return 0;  
}