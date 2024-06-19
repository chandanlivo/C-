#include<iostream> 
//system header file

#include"this.h" 
// this is user defined header file , this should be present in the cwd or else compiler throws an error

using namespace std;
int main(){
    int a = 5 , b= 4;
    cout<<"----This is tutorial 5-----"<<endl;
    cout<<"The value of a + b is: "<<a+b<<endl;
    cout<<"The value of a ++ is: "<<a++<<endl;
    cout<<"The value of a -- is: "<<a--<<endl; 
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<"The value of b-- is: "<<b--<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"------------------------------"<<endl;

    // assignment operators : Used to assign the values
    // int a =5, b=6;
    //char d = 'd';

    // Comparsion operators: Used to compare the values : returns BOOLEAN values
    cout<<"the value of a==b is: "<<(a==b)<<endl;
    cout<<"the value of a != b is: "<<(a != b)<<endl;
    cout<<"the value of a>=b is: "<<(a>=b)<<endl;
    cout<<"the value of a<=b is: "<<(a<=b)<<endl;
    cout<<"the value of a<b is: "<<(a<b)<<endl;
    cout<<"the value of a>b is: "<<(a>b)<<endl;
    cout<<"------------------------------"<<endl;


    // Logical operators
    cout<<" The value of (a==b) && (a<b) is: "<<((a==b) && (a<b))<<endl; // logical AND
    cout<<" The value of (a==b) || (a>b) is: "<<((a==b) || (a>b))<<endl; // logical OR
    cout<<" The value of (a != b) && (a>b) is: "<<((a != b) && (a>b))<<endl;
    cout<<"The value of !(a==b) is: "<<(!(a==b))<<endl; // logical NOT


     return 0;
}
