#include<iostream>
using namespace std;

class var
{
    int a,b;
    public:
    var(int x, int y){
        a=x;
        b=y;
    }
    void swap(var& x){
       x.a=x.a+x.b;
       x.b=x.a-x.b;
       x.a=x.a-x.b;
    }
    void print(){
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};

int main()
{
    var v(5,3);
    v.print();
    v.swap(v);
    v.print();
    return 0;
}
