#include<iostream>
#include<utility>
using namespace std;

int main()
{
    //
    //1
    int x,y;
    pair<int , char> a;
    a=make_pair(12,'r');
    cout<<a.first<<" "<<a.second<<endl;
    //
    //OR
    //2
    int x,y,sum=0;
    pair<int , int> a;
    cin>>x>>y;
    a=make_pair(x,y);
     sum=a.first+a.second;
    cout<<sum;
    //
    //
    return 0;
}



/*
#include <iostream>
#include <utility>

using namespace std;

pair<int, int> sum_and_product(int a, int b) {
    int sum = a + b;
    int product = a * b;
    return make_pair(sum, product);
}

pair<int, int> count_characters(string s, char c) {
    int count_s = 0;
    int count_c = 0;
    for (char ch : s) {
        if (ch == c) {
            count_c++;
        }
        count_s++;
    }
    return make_pair(count_s, count_c);
}

int main() {
    int a = 3, b = 5;
    pair<int, int> result1 = sum_and_product(a, b);
    cout << "Sum: " << result1.first << endl;
    cout << "Product: " << result1.second << endl;

    string s = "Second";
    char c = 'l';
    pair<int, int> result2 = count_characters(s, c);
    cout << "String length: " << result2.first << endl;
    cout << "Count of character '" << c << "': " << result2.second << endl;

    return 0;
}
