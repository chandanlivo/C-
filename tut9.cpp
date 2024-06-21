#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    //********Selection control structures: if else-if else LADDER********

    // if((age<18) &&(age>0)){
    //     cout<<"you cannot vote"<<endl;
    // }
    // else if(age == 18){
    //     cout<<"This will be your first vote"<<endl;
    // }
    // else if(age<1){
    //     cout<<"you are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can vote"<<endl;
    // }

    //********Selection control structures: switch-case********

    switch (age)
    {
    case 18:
        cout<<"You are a teenage voter"<<endl;
        break;
    case 23:
        cout<<"You are an adult"<<endl;
        break;
    case 60:
        cout<<"You are an old age voter"<<endl;
        break;        
    // If we dont use break here all the above statements will be printed

    default:
        cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch-case";


    return 0;

}