
#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int &b = a;    // --->> reference variable
    a++;  b++;      // Both a and b reffered to same address. 
    cout<<a<<endl;

   return 0; 
}