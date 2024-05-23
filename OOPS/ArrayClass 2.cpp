#include <iostream>
using namespace std;

class klass
{
    public:
    int n;
    int arr[100];
    void data();
    void display();
};

void klass :: data()
{
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void klass :: display()
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;  
    }
}

int main() {
    klass obj;
    int t;
    cin>>t;
    while(t--){
        cin>>obj.n;
        obj.data();
        obj.display();
    }
    return 0;
}
