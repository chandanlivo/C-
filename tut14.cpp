#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eid; 
    char favchar;
    float salary;
}ep;

union money
{
    /* data */
    int rice; //4 bytes >> system allocates this memeory for remaining 2 datatypes for a better memory management
    char car; //1
    float pounds; //4
};


int main(){
    ep chandan;  // by using typedef struct employee can be replaceed by 'ep'
    struct employee shubam;
    union money m1;
    {
        /* data */
        m1.rice = 34;
        m1.car = 'c';
        // m1.pounds = 22.2;
        cout<<m1.car<<endl; // only one item can be used at a time out of three , because they all share the same memory
        
    };
    
    enum Meal{breakfast, lunch, dinner};{
        Meal m1 = lunch;
        cout<<m1<<endl;
        cout<<(m1==1)<<endl; // gives the boolean value
        // cout<<breakfast;
        // cout<<lunch;
        // cout<<dinner<<endl;
        } 
    
    
    {
        /* data */
        chandan.eid= 1;
        chandan.favchar = 'c';
        chandan.salary = 120000000;
        shubam.eid= 11;
        cout<<"The employee id of chandan is: "<<chandan.eid<<endl;
        cout<<"The employee id of shubam is: "<<shubam.eid<<endl;
        cout<<"The favorite is: "<<chandan.favchar<<endl;
        cout<<"The salary is: "<<chandan.salary<<endl;

    };
    
    return 0;
}