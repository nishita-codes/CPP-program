#include<iostream>
using namespace std;

//CALL BY VALUE-function where the actual values of the arguments are copied into functions formal parameter.

void swap(int a, int b){
    int temp = a;
    a =b;
    b = temp;
}
int main(){
    int x =12,y=34;
    swap(x,y);//passing by value ,no actual swap happens in main()
    cout<<"x:"<<x<<",y:"<<y<<endl;//original value remain unchanged.


return 0;
}