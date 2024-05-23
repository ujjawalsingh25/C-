//Virtual Function in multi level inheritance derived class ::

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

class D2 : public D1
{
    protected:
    int x,y;
    public:
    D2(int a, int b, int x , int y):D1(a,b,0,0),x(x),y(y) {}    //Initialize the value with zero then give the value to the variables.
    void display()  {
        cout<<"D2 x: "<<x<<endl;
        cout<<"D2 y: "<<y<<endl;
    }
};

int main()
{
    int x=5,y=3;
    Base * ptr;
    D1 *pntr;
    Base ob(x,y);
    D1 od1(x,y,9,7);
    D2 od2(x,y,1,2);
    D1 *dptr;
    D2 odt2(55,22,44,11);
   
   cout<<"1"<<endl; 
    ptr=&od1;
    ptr->display();
    
    cout<<"2"<<endl;
    ptr=&od2;
    ptr->display();

    cout<<"3"<<endl;
    pntr=&od2;
    pntr->display();

    cout<<"4"<<endl;
    dptr=&odt2;
    dptr->display();
  
    return 0;
}
