#include<iostream>
using namespace std;

 class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"base1 class constructor called"<<endl;
    }
        void printdata1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
 };
 
 class Base2{
    int data2;
    public:
    Base2(int i){
        data2=i;
        cout<<"base2 class constructor called"<<endl;
    }
        void printdata2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
 };

class Derived:public Base1 , public Base2{
    int derived1 ,derived2;
    public:
    Derived(int a,int b,int c,int d):Base1(a) ,Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called"<<endl;
    }
void printdata3(void){
cout<<"the value of derived1 is "<<derived1<<endl;
cout<<"the value of derived2 is "<<derived2<<endl;

}
};
int main(){
    Derived nishita(1,2,3,4);
    nishita.printdata1();
    nishita.printdata2();
    nishita.printdata3();

return 0;
}