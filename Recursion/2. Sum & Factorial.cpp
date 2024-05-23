#include<iostream>
using namespace std;

int recursion_sum(int n){
    int sum =0;
    if(n<=0)    return 0;
    sum = n + recursion_sum(n-1);  
    return sum;
}


int recursion_fact(int n){
    int fact = 1;
    if(n<=0)    return 1;
    fact = n * recursion_fact(n-1);  
    return fact;
}


int main()
{
    int n;
    cout<<"Number: ";
    cin>>n;
    int ans = recursion_sum(n);
    cout<<"Sum: "<<ans<<endl;
    int ansFact = recursion_fact(n);
    cout<<"Factorial: "<<ansFact<<endl;
    return 0;
}