#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me your age "<<endl;
    cin>>age;

    if(age<18){
        cout<<"you can not come to my party";
    }else if(age==18){
        cout<<"you are a kid and you have a pass of kids so you can come to my party";
    }else{
        cout<<"you can come to my party";
     } 
     return 0;
}

