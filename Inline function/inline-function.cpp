#include<iostream>
using namespace std;

/*INLINE FUNCTION-is function whose definition is expanded in place at the point of each call,rather
than being involved throughthe standard function call mechanism.*/
inline int product(int a,int b){
    return a*b;
}  
int main(){
    int a, b ;
    cout<<"enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<a*b<<endl;
return 0;
}