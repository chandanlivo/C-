#include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"Using the function with 2 argments: "<<endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout<<"Using the function with 3 argments: "<<endl;
    return a + b + c;
}

// volume of a cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);

}
// volume of a cube
int volume(int a){
    return (a * a * a);

}
// volume of a rect box
int volume(int l, int b, int h){
    return (l * b * h);

}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3, 6)<<endl;
    cout<<"The sum of 3 ,5 and 6 is "<<sum(3, 5, 6)<<endl;
    cout<<"The volume of cylinder r=3 and h=6 is "<<volume(3,6)<<endl;
    cout<<"The volume of a=6 is "<<volume(6)<<endl;
    cout<<"The volume of cylinder l=3, b =5  and h=6 is "<<volume(3,5,6)<<endl;
    
    return 0;
}