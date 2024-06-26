#include<iostream>
using namespace std;

// Function prototyping
// Function name(arguments)
int sum(int a, int b);
// int sum(int , int );  ----->>> Acceptable
void g();
int main(){
    int num1, num2;
    cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    g();
    return 0;
}
int sum(int a,int b){
    int c= a + b;
    return c;
}

void g(){
    cout<<"Hello!, Good morning..";
}