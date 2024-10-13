#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number you want multiplication table of"<<endl;
    cin>>num;
    cout<<"The multiplication table is "<<endl;
    
    for(int i=0; i<=10; i++)
    {
          cout<<num<<"X"<<i<<"="<<num*i<<endl;
    }      
    return 0;
}