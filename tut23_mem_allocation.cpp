#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void){counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter the Id of your item "<< counter + 1<<endl;
    cin>>itemId[counter];
    cout<<"The price of your item "<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void shop :: displayPrice(void){
    for(int i= 0; i < counter; i++){
        cout<<"The price of your item "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    shop angadi;
    angadi.initCounter();
    angadi.setPrice();
    angadi.setPrice();
    angadi.setPrice();
    angadi.displayPrice();
    return 0;
}