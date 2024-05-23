#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bitset<4> n1(n);
    for(int i=3;i>=0;i--){
        cout<<n1[i]<<" ";
    }cout<<endl;
}