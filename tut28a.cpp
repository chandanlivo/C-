#include<iostream>
using namespace std;

//Forward declaration
class Y;

class X{
    int data;
    public:
    void setValue(int value){
        data = value;
    }
    friend void add(X, Y);
    
};

class Y{
    int num;
    public:
    void setValue(int value){
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y gives "<<o1.data + o2.num;
}

int main(){
    X a1;
    a1.setValue(3);

    Y a2;
    a2.setValue(8);

    add(a1, a2);
    return 0;
}