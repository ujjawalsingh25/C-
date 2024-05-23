#include<iostream>
#include<string>
using namespace std;

template<class t1, class t2>
class practice{
    protected:
    int x,y,z;
    public: 
    practice(t1 a, t2 b): x(a),y(b) {}

    practice(practice<t1,t2> & obj_constructor){
        x=obj_constructor.x;
        y=obj_constructor.y;
        z=x*y;
    }

    void display(){
        cout<<x*y<<endl;
    }
};

int main(){
    practice <int, int> obj(3,5);
    obj.display();

  return 0;
}