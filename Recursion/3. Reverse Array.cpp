#include<iostream>
using namespace std;

void reverseArray(int arr[], int low,  int n){
    if(low >= n/2){
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        return;
    }
    swap(arr[low], arr[n - low -1]);
    reverseArray(arr, low+1, n);
}

int main()
{
    int n, arr[10];
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr, 0, n);

    return 0;
}