#include<iostream>
using namespace std;
/*FUNCTION OVERLOADING-it is feature that allows multiple function to have the
 same name but different parameter list..*/

 int sum(int a ,int b){
    return (a+b);
 }

 int sum(int a,int b,int c){
    return (a+b+c);
 }
int main(){
    cout<<"The sum of 3 and 5 is "<<sum(3,5)<<endl;
    cout<<"The sum of 3,5 and 7 is "<<sum(3,5,7)<<endl;


return 0;
}