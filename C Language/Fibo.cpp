#include<iostream>
using namespace std;
#define max 10
int main()
 { 
    int i,n;
    cin>>n; 
    int a[max];
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
    cout<<a[i];
    cout<<" ";
    }

    return 0;
 }    