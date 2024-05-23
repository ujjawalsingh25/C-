#include <iostream>
using namespace std;

class klass
{
    public:
    void modify(int arr[], int n);
};
void klass :: modify(int arr[], int n){
        for(int i=0;i<n;i++){
           cout<<arr[i]<<endl;  
        }
    }
int main() {
    klass obj;
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
           cin>>arr[i];
        }
       obj.modify(arr,n);
    }
    return 0;
}
