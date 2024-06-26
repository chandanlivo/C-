#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a + b;
    return c;
}
// This will not swap a and b
int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
// call by reference using pointers
int pointerSwap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
// using reference variable
int swapRefVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;}

int main(){
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5);
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    // swap(x, y); This will not swap a and b
    // pointerSwap(&x,&y);  This will swap a and b using pointers reference
    swapRefVar(x,y); // using reference variables
    cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
    return 0;
}