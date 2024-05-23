
#include<iostream>
#include<string>
using namespace std;

void recursion(int count, int n){
    cout<<count<<" ";
    if(count>=n)  
        return;
    recursion(count+1, n);
}

void recursion_reverse(int n, int count){
    cout<<n<<" ";
    if(count>=n)  
        return;
    recursion_reverse(n-1, count);
}

int main()
{
    int n;
    cout<<"Number: ";
    cin>>n;
    int count = 1;
    recursion(count, n);
    cout<<endl;
    recursion_reverse(n, count);
    return 0;
}
