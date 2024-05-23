#include<iostream>
using namespace std;

void func1(int **p){
  p = p+1;

}
void func2(int **p){
  *p = *p+1;

}
void func3(int **p){
  **p = **p+1;

}

int main()
{
    int a = 5;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    
    cout<<a<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    func1(ptr2);
    // func2(ptr2);
    // func3(ptr2);

    cout<<a<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    return 0;
}