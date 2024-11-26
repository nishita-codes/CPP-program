#include <iostream>
using namespace std;
/*THIS POINTER- this is a keyword which is a pointer which points to the object which invokes(called) the member
function when you want to return that object*/

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}