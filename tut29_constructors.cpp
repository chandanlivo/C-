#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(void); // construction declaration
    void printNum(){
        cout<<"Your number is "<<a<<"+ "<<b<<"i"<<endl;
    }
};
Complex ::Complex(void){ // Default constructor , as it takes no parameters
    a=10;
    b=10;
    cout<<"Hello World!!"<<endl;
}

int main(){
    Complex c1, c2, c3;
    c1.printNum();
    c3.printNum();
    c1.printNum();
    return 0;
}