#include<iostream>
using namespace std;
//SYNTAX-MULTIPLE INHERITANCE
//class Derived: visibility-mode base1 , visibility-mode base2
class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int =a;
    }
 };

 class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }
 };

 class derived: public base1 ,public base2{
    public:
    void show(){
    cout<<"The value of base1 is "<<base1int<<endl; 
    cout<<"The value of base2 is "<<base2int<<endl; 
    cout<<"The sum of base1 and base2 is "<<base1int + base2int<<endl;      
    }
 };
int main(){
  derived nishita;
  nishita.set_base1int(25);
  nishita.set_base2int(5);
  nishita.show();

return 0;
}