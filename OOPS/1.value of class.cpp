#include<iostream>
using namespace std;
class klass
{
    public :
    int a=5,b=3;
};
int main()
{
    klass k;
    int m=k.a;
    int n=k.b;
    cout<<"a: "<<m<<endl<<"b: "<<n<<endl;
    return 0;
}