#include<iostream>
using namespace std;
class num{
    public:
    num(){
        cout<<"constructor called"<<endl;
    }
    ~num(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    num obj;
    return 0;
}