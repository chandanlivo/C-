#include<iostream>
using namespace std;

int main(){
    int marks[] = {22, 51, 76, 54};
    int mathMarks[4];
    mathMarks[0]= 11;
    mathMarks[1]= 44;
    mathMarks[2]= 14;
    mathMarks[3]= 32;

    cout<<"-----These are marks-----"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"-----These are mathMarks-----"<<endl;
    // You can Change the values, but have to change the values before you print
    mathMarks[2]= 211;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // using for loop
    for(int i= 0; i<4; i++){
        cout<<"the value of marks "<< i << " is " << marks[i]<<endl;
    }

    int *p = mathMarks;
    cout<<"The value of mathMarks[0] is "<<*p<<endl;
    cout<<"The value of mathMarks[1] is "<<*(p+1)<<endl;
    cout<<"The value of mathMarks[2] is "<<*(p+2)<<endl;
    cout<<"The value of mathMarks[3] is "<<*(p+3)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p);
   
    
    
    return 0;
}