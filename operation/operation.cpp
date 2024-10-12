#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"The value of a is";
    cin>>a;
    cout<<"The value of b is";
    cin>>b;
//arithmatic operation
    cout<<"The value of a+b "<<a+b<<endl;
    cout<<"The value of a-b "<<a-b<<endl;
    cout<<"The value of a*b "<<a*b<<endl;
    cout<<"The value of a/b "<<a/b<<endl;
    cout<<"The value of a++ "<<a++<<endl;
    cout<<"The value of a-- "<<a--<<endl;
    cout<<"The value of b++ "<<b++<<endl;
    cout<<"The value of b-- "<<b--<<endl;

//comparison operation
    cout<<"The value of a == b "<<(a==b)<<endl;
    cout<<"The value of a != b "<<(a!=b)<<endl;
    cout<<"The value of a >= b "<<(a>=b)<<endl;
    cout<<"The value of a <= b "<<(a<=b)<<endl;
    cout<<"The value of a > b "<<(a>b)<<endl;
    cout<<"The value of a < b "<<(a<b)<<endl;
    
 //logical operation
    cout<<"The value of ((a == b) && (a<b))  is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a == b) || (a>b)) is "<<((a==b) || (a>b))<<endl;
    cout<<"The value of (!(a == b)) is "<<(!(a == b))<<endl;
       
   return 0;
}