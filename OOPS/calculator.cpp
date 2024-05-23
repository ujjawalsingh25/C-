#include<iostream>
#include<bits/stdc++.h>
#include<utility>
using namespace std;

class cal 
{
    protected:
    int a,b,c;
     int s=0,d=0,m=0,dv=0;
     pair<int , int> v;
    public:
    cal(int x, int y, int z){
        a=x;
        b=y;
        c=z;
        v=make_pair(a,b);
        if(c==1){
            s=v.first+v.second;
            cout<<s<<endl;
        }
        else if(c==2){
            d=v.first-v.second;
            cout<<d<<endl;
        }
        else if(c==3){
            m=v.first*v.second;
            cout<<m<<endl;
        }
        else if(c==4){
            dv=v.first/v.second;
            cout<<dv<<endl;
        }
    
    }
    ~cal(){};
};
class sci_cal: public cal
{
    public:
    //sci_cal(int x, int y, int z){
    if(c==5){
        double l=log10(v.first);
        cout<<l<<endl;
    }
    else if(c==6){
             pr=v.first;
            for(int i=1;i<v.second;i++){
            v.first=v.first*pr;
        }
    }
    ~sci_cal(){};
};

int main()
{
    int a,i,b,c;
    cout<<"Enter numbers: "<<" ";
        cin>>a>>b;
        cout<<"Enter operation: "<< " ";
        cin>>c;
        if(c<=4){
        cal obj(a,b,c);
        }
        else if(c==5 || c==6){
         //modify-->   sci_cal obj(a,b,c);
        }
    return 0;
}