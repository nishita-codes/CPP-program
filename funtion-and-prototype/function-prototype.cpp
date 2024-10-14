#include<iostream>
using namespace std;

/*FUNCTION PROTOTYPE-it is declaration of function that specifies its name,return type , and the parameter 
it take without providing the actual implementation.it serves as a blueprint that informs the compiler about
the function existence and its signature,allowing the function to be called before its fully defined*/

int sum(int a,int b);

int main(){
    int num1,num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;

    cout<<"enter second number"<<endl;
    cin>>num2;

    cout<<"the sum is "<<sum(num1,num2);
}
int sum(int a,int b){
    int c= a + b;
    return c;
}