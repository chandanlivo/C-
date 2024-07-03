#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The count is " << count << endl;
        //cout<<id;  -->> This will throw an error because "id" is not a static data member
    }
};

int Employee ::count = 1000; // default value is 0
int main()
{
    Employee chandan, sharath, bahubali;
    // count is the static data member of the class Employee
    chandan.setData();
    chandan.getData();
    Employee::getCount();

    sharath.setData();
    sharath.getData();
    Employee::getCount();

    bahubali.setData();
    bahubali.getData();
    Employee::getCount();
    return 0;
}