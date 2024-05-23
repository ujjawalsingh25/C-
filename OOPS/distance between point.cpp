#include<iostream>
#include<cmath>
using namespace std;
class point;
class distance{
    public:
    distance();
    distance(point ,point);
};
class point
{
    int a,b;
    friend distance::distance(point ,point);
    public:
    point(int x, int y){ 
        a=x;
        b=y;
    }
};
distance :: distance(point p,point q){
    int dx=(q.a-p.a)*(q.a-p.a);
    int dy=(q.b-p.b)*(q.b-p.b);
    int dst=sqrt(dx+dy);
    cout<<dx<<" "<<dy<<"  distance:"<<dst<<endl;
}

int main()
{
    point p(1,2);
    point q(4,6);
    distance d(p,q);
    return 0;
} 