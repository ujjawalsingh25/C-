#include<iostream>
using namespace std;

int main()
{
    int num = 25;
    int *ptr = &num;

// ---------------------------------------------------
    // *& --->>> CROSS EACH OTHER ****
    // *(&num)
    // = *(500) --> *(adress of num , 'say 500')
    // = 25 -->> num itself.
// ---------------------------------------------------

    cout<<"Value of num                                num = : "<<num<<endl;
    cout<<"Value at address(Dereferrencing Operator)  (*ptr) : "<<*ptr<<endl;
    cout<<" Address value of num store in pointer      (ptr) : "<<ptr<<endl;
    cout<<" Address value of num                      (&num) : "<<&num<<endl;

    // int *pntr;  *** DONT DO****   //This will lead to get pointer to a garbage value address.
    int *pntr = 0;    // So either initialize with address value or 0.      
    // cout<<pntr;     ***ERROR***      // With 0 initialize give segmentation error so it further need to pass address value.
    pntr = &num;
    cout<<"\n Pointer with initialization 0          (pntr) : "<<pntr<<endl;
    cout<<"Value at Pointer with initialization 0   (*pntr) : "<<*pntr<<endl;

    cout<<"\n  Size of int -> sizeof(num): "<<sizeof(num)<<endl;
    cout<<"Size of pointer -> sizeof(ptr): "<<sizeof(ptr)<<endl; // As it store address so need hexa decimal value 'long long' so 8 byte.

    int n = 5;
    int *p = &n;
    int a = *p;
    a++; 
    cout<<a<<endl;
    cout<<n<<endl;
    



    // Copying a pointer
    int *copy = ptr;
    cout<<"\n Value at ptr and copy      (*copy - *ptr) : "<<*copy<< " - "<<*ptr<<endl;
    cout<<"Address value at ptr and copy (copy - ptr)   : "<<copy<< " - "<<ptr<<endl;

    // Pointer address increment
    cout<<"Value of address before (*ptr) : "<<ptr<<endl;
    *ptr++;
    cout<<"Value of address after (*ptr++) increase by 4 byte: "<<ptr<<endl;  // Value of address after *ptr++ increase by 4 byte


  return 0;  
}