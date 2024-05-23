/*
//2
#include<bits/stdc++.h>
using namespace std;

class A
{
    int a=1;
    public:
    A & data(int a) {  
        this->a=a;
       // cout<<a<<endl;
        return *this;
    }
    void display(){
        cout<<a<<endl;
    }

};
int main()
{
    A d;
    d.data(5).display();  
    d.display();  
    return 0;
}

*/

#include<iostream>
using namespace std;

class Thiss
{
    protected:
    int a,b,c;
    public:
    ///*
    Thiss(int a, int b)//: a(a),b(b) {}  --NO ERROR--
    
    {
       this-> a=a;           // If "THIS" is not used & {if a=a; then it defines (proteceted a = protected a)}
       this-> b=b;              // "THIS" is used so protected a get value passed to object.
    }
    /*
    /*Thiss & data(int a, int b,int z){   //---A class { object.functio(int , int ,int)} creted, 
                                          //  that have the memory address of the 'data' function taken as an object.----
       this-> a=a;
       this-> b=b;
       c=z;
       return *this;
    }
    */
    void display() {
        cout<<"a: "<<a<<endl<<"b: "<<b<<endl;//<<"c: "<<c<<endl;
    }
};

int main()
{
    Thiss obj(5,3);
    // Thiss obj(5,3).display();   --ERROR--
    obj.display();
    
    //Thiss obj2;
    //obj2.data(9,7,8).display();
    //obj2.display();
    return 0;
}