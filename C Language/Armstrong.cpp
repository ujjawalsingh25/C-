#include<iostream>
 using namespace std;
int cube(int x)
{
    int y=x*x*x;
    return y;
}
int main()
 {  int a, x,n,sum = 0;
   cin>>n;
   a=n;
   while (a!=0)
   {
      x=a%10;
      sum+=cube(x);
      a=a/10;
   }
    if (sum==n)
        cout<<"Armstrong Number\n";
    else
        cout<<"Not a Armstrong Number\n";
    return 0;
 }    