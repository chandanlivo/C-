#include<iostream>
using namespace std;

class Complex; // Forward declaration

class Calculator{
    public:
    int add(int a , int b){
        return a + b;
    }
   
    int sumRealComplex(Complex,Complex);
    int sumCompComplex(Complex,Complex);
    
    
    };

class Complex{
    int a, b;

     // Individually declaring functions as friends
    // friend int Calculator :: sumRealComplex(Complex, Complex);
    // friend int Calculator :: sumCompComplex(Complex, Complex);

    // Declaring whole class as friend
    friend class Calculator; 

    public:
    void setNum(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNum(void){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
}
int Calculator :: sumCompComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
}
int main(){
    Complex o1, o2;
    o1.setNum(1, 2);
    o2.setNum(5,6);
    Calculator calc;
    int res= calc.sumRealComplex(o1, o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    int resc= calc.sumCompComplex(o1, o2);
    cout<<"The sum of real part of o1 and o2 is "<<resc<<endl;
    return 0;
}