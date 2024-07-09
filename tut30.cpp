#include<iostream>
using namespace std;
class Complex{
    int a, b;
    public:
    Complex(int, int); // construction declaration
    void printNum(){
        cout<<"Your number is "<<a<<"+ "<<b<<"i"<<endl;
    }
};
Complex ::Complex(int x, int y){ // Pararmeterized constructor , as it takes parameters
    a = x;
    b = y;
    // cout<<"Hello World!!"<<endl;
}
int main(){

    //Implicict call
    Complex a(4,6);

    //Explicit call
    Complex b = Complex(5,7);

    a.printNum();
    b.printNum();

    return 0;
}