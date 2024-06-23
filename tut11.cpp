#include<iostream>
using namespace std;

int main(){
    // for(int i = 0; i<14; i++){
    //     cout<<i<<endl; // output is: 0 1 2
    //     if(i==2){
    //         break;
    //     }
    //     // cout<<i<<endl;  output is: 0 1  
    //       }
    
    for(int i = 0; i<14; i++){
        //cout<<i<<endl; // output has 2
        if(i==2){
            continue;
        }
         cout<<i<<endl; // skips 2 and prints remaining all the numbers
          }

    return 0;
}