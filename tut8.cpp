#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //***CONSTANTS IN C++********
    // int a = 54;
    // cout<<"The value of a was:"<<a<<endl;
    // a = 32;
    // cout<<"The value of a is:"<<a<<endl;
    //   int a = 41, b = 33, c=345;
      
    //  cout<<"The value of a is: "<<a<<endl; // endl is manipulator

    //  cout<<"The value of b is "<<b<<endl;
    //  cout<<"The value of b with setw is "<<setw(4)<<b<<endl;
    //  cout<<"The value of c with setw is "<<setw(4)<<c<<endl;
    //  cout<<"The value of c is "<<c<<endl;
    int a =6, b = 9;
    int c= a*5 -2 +b -b; // Associativity is from left to right
    cout<<c;

    return 0;
}
