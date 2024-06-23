#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *b = &a;
    // & (Adresss of ) opeartor
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of b is: "<<&a<<endl;

    //* (Value of) deference operator
    cout<<"The value at address b is: "<<*b<<endl;
    int **c = &b;
    cout<<"The address of c is: "<< &b << "\t" << c << endl;
    return 0;
}