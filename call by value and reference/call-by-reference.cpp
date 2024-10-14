#include<iostream>
using namespace std;

//CALL BY REFERENCE-function where the function recieves a reference to the original variable.

void swap(int &a,int &b){
    int temp = a;
    a =b;
    b = temp;
}
int main(){
    int x=20,y=10;
    swap(x,y);//passes by reference
    
    cout<<"x:"<<x<<",y:"<<y<<endl;//original value will change and value will be swapped..

return 0;
}