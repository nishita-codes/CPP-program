#include<iostream>
using namespace std;
//using recursion

int fab(int n){
    if(n<2){
        return 1;
    }return fab(n-2)+fab(n-1);
}
int main(){
  int a;
  cout<<"Enter the number"<<endl;
  cin>>a;
  cout<<"The term of fabonacci sequence at position "<<a<< " is "<<fab(a)<<endl;
return 0;
}