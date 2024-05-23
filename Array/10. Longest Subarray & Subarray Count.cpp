#include <iostream>
using namespace std;

// 1 2 3 1 1 1 1 4 2 3

void longest_subarray(int arr[], int n, int val){
    int sum = 0, max_length = 0;
    int high=0,  low=0;
    while(high < n){
        while(low <= high && sum > val){
                sum -= arr[low];
                low++;
            }
            if(sum == val){
                max_length = max(max_length, high-low);
            }
                high++;
                sum += arr[high];
    }
    cout<<max_length;
}


void count_subarray(int arr[], int n, int val){  
    int sum = 0, max_count_subarray = 0;            
    int high=-1,  low=0;                    
    while(high < n){                              // The change is high start -1 and max_length count increase of every sum = val
        while(low <= high && sum > val){
                sum -= arr[low];
                low++;
            }
            if(sum == val){
                max_count_subarray ++;
                 cout<<max_count_subarray<< " "<<low<< " "<<high<<endl;  
            }
                high++;
                sum += arr[high];          
    }
    cout<<" \n"<<max_count_subarray;
}

int main() {
    int n, val, arr[10];
    cout << "Size: ";
    cin >> n;
    cout<<"Value: ";
    cin>>val;
    for (int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    longest_subarray(arr, n, val); 
    return 0;
}