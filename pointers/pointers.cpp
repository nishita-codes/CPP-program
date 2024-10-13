#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *b= &a;

    cout<<"the address of a is "<<a<<endl;
    cout<<"the adress of a is "<<&a<<endl;

    cout<<"the value of b is "<<*b<<endl;

return 0;
}