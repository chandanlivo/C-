#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x, y;
    friend void distance(Point o1, Point o2);
    public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint(void){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }

};

void distance(Point o1, Point o2){
float dist = sqrt(pow(o2.x-o1.x , 2) + pow(o2.y-o1.y, 2));
cout<<"The distance between p and q is "<<dist<<endl;
}
int main(){
    Point p(1,1);
    p.displayPoint();
    Point q(3,5);
    q.displayPoint();
    distance(p, q);
    
    return 0;
}