#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
    Simple(int a,int b = 3, int c = 1){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 are "<<data1<<" , "<<data2<<" and "<<data3<<endl;

}
int main(){
    Simple s(22,1);
    s.printData();
    return 0;
}