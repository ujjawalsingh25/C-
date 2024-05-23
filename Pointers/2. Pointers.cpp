#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {3,25,5,21,15};

    // arr  -->> address value of 1st element
    // *arr -->> arr[0]  or value of first 1 element
    
    // ---------------------------------------------
    // |    // arr[i] = *(arr+i)                    |
    // |   // i[arr] = *(i+arr)    //Both same      |
    // ---------------------------------------------<<
    cout<<arr[3]<<" - "<<3[arr]<<endl;
 
    cout<<"arr: "<<arr<<endl;
    cout<<"&arr: "<<&arr<<endl;
    cout<<"&arr[0]: "<<&arr[0]<<endl;
    cout<<"&arr[1]: "<<&arr[1]<<endl;
    cout<<"&arr+1: "<<&arr+1<<endl;


    cout<<"\narr[0]: "<<arr[0]<<endl;
    cout<<"*arr: "<<*arr<<endl;
    cout<<"*arr+1: "<<*arr+1<<endl;
    cout<<"*(arr)+1: "<<(*arr)+1<<endl;
    cout<<"*(arr+1): "<<*(arr+1)<<endl;

    int *ptr = &arr[5];
    cout<<"\n Size of arr  ------ (size * 4 'for int') ------------------  sizeof(arr)  : "<<sizeof(arr)<<endl;
    cout<<"Size of first element (size = 4 'for int') -----------------  sizeof(*arr) : "<<sizeof(*arr)<<endl;
    cout<<"Size of pointer to arr (size of address value of 1st element i.e 8 for hexa): "<<sizeof(ptr)<<endl;
    cout<<"Size of first element from pointer to arr ----------------------sizeof(*ptr): "<<sizeof(*ptr)<<endl;



// ---------------------------------------------------------------------------------------------------
    // FOR CHAR
  // char ch[6] = "abcde";
  // cout<<ch<<endl;

  // char *ptr = &ch[0];
  // cout<<ptr<<endl;
  // cout<<*ptr<<endl;

  char ary = 'u';
  char *p = &ary;
  cout<<p<<endl;
// ----------------------------------------------------------------------------------------

  return 0;  
}