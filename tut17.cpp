#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a *b;
}

float moneyRecieved(int currentMoney, float factor = 1.05)// default arguments must be placed at right 
{ 
    return currentMoney * factor;
}

int main(){
    // int a, b;
    // cout<<"Enter the values of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;  //using inline "product(a,b)" is replaced by return a*b
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    int money =100000;
    // if you have not providedd the value for factor function will get that value from default arguments
    cout<<"If you have " << money << " in your bank account, you will recieve "<<moneyRecieved(money)<<endl; 

    // here, we have given the value for factor = 1.1 , so it will not take the value from default arguments
    cout<<"For VIP accounts, if you have " <<money<<" in your bank account, you will recieve "<<moneyRecieved(money, 1.1)<<endl; //
    
    return 0;
}