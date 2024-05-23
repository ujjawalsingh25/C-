#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 13

void fibo(int n1, int n2, int num, int count = 0){
    int sum=0;
    if(num == count)    return;
    cout<<n1<<" ";
    sum = n1 +n2;
    fibo(n2, sum, num, count+1);
}

int main()
{
    int n, arr[10];
    cout<<"Num: ";
    cin>>n;
    fibo(0, 1, n);

    return 0;
}