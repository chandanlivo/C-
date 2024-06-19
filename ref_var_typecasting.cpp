#include<iostream>
using namespace std;
int c = 45;

int main(){
    //int a, b, c;
    // cout<<"The value of a is: "<<endl;
    // cin>>a;
    // cout<<"The value of b is: "<<endl;
    // cin>>b;
    // c = a+ b;
    // cout<<"The sum is c: "<<c<<endl;
    // cout<<"The value of global C is: "<<::c;

    // float d = 34.4; 
    // long double e = 34.4;
    // By default decimals will be in double
    // cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;
    // cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;


    //**************REFERENCE VARIABLES****************
    float x = 555;
    float & y = x; // & Represents the value of another variable
    cout<<x<<endl;
    cout<<y<<endl;

    //**********TYPECASTING: changing one datatype into another ********
    int a = 55.4;
    float b = 45.4;
    cout<<"The value of a is: "<<(int)a<<endl;
    cout<<"The value of a is: "<<int(a)<<endl;
    int c = int(b); // Bring the value of 'b' into 'c'
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    cout<<"The value of C is "<<c<<endl;


    return 0;

}