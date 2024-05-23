#include<iostream>
using namespace std;

class BaseMain{
    protected:
        int a;
    public:
        void data1(int x){
            a=x;
        }
        void display1(void){
            cout<<"a: "<<a<<endl;
        }
};
class BsDr1 : public virtual BaseMain{
    protected:
        int b,c;
        public:
            void data2(int x, int y){
                b=x;
                c=y;
                }

            void display2(void){
                display1();
                cout << "b: "<<b<<endl<<"c: "<<c<<endl;
            }
};
class BsDr2: public virtual BaseMain{
    protected:
        int d;
    public:
        void data3(int m){
            d=m;
        }

        void display3(void){
            cout<<"d: "<<d<<endl;
        }

};
class Derived : public BsDr1, public BsDr2{
   private:
        int f;
    public:
        void displayf(void){
            //display1();
            display2();
            display3();
        }
};

int main(){
    BsDr1 obj1;
    BsDr2 obj2;
    Derived d;
    cout<<"\n Calling different functions using different objects of classes."<<endl;
    obj1.data1(5);
    obj1.data2(52,3);
    obj1.display2();
    obj2.data3(12);
    obj2.display3();
    cout<<"From Derived class calling functions through inheritance "<<endl;
    cout<<"Since class BaseMain is made virtual class so only one copy of the \n data member and the member function is passed to the classes inheriting it(i.e class BsDr1 and BsDr2) "<<endl;
    d.data1(5);
    d.data2(52,3);
    d.data3(12);
    d.displayf();
    cout<<endl;
    return 0;
}