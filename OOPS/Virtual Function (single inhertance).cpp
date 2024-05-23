//Virtual Function in two single inheritance derived class
#include<iostream>
using namespace std;

class Base
{
    public:
    int a,b;
    public:
    Base(int a, int b) : a(a),b(b) {}
     void display(){
        cout<<"Base a: "<<a<<endl;
        cout<<"Base b: "<<b<<endl;
    }
};

class D1 : public Base
{
    protected:
    int c,d;
    public:
    D1(int a, int b, int c , int d):Base(a,b),c(c),d(d) {}
    void display(){
        cout<<"D1 c: "<<c<<endl;
        cout<<"D1 d: "<<d<<endl;
    }
};
class Base2
{
    protected:
    int a,b;
    public:
    Base2(int a, int b) : a(a),b(b) {}
     virtual void display(){
        cout<<"Base2 a: "<<a<<endl;
        cout<<"Base2 b: "<<b<<endl;
    }
};
class D2 : public Base2
{
    protected:
    int x,y;
    public:
    D2(int a, int b, int x , int y):Base2(a,b),x(x),y(y) {}    //Initialize the value with zero then give the value to the variables.
    void display() {
        cout<<"D2 x: "<<x<<endl;
        cout<<"D2 y: "<<y<<endl;
    }
};

int main()
{
    int x=5,y=3;
    Base * ptr;
    Base2 *pntr;
    Base ob(x,y);
    Base2 ob2(x,y);
    D1 od1(x,y,9,7);
    D2 od2(x,y,1,2);
 
    ptr=&od1;
    ptr->display();
    cout<<"   D2\n";
    pntr=&od2;
    pntr->display();
    cout<<"Try\n";
    D2 tr(1,2,3,4);
    tr.Base2::display();

    return 0;
}

