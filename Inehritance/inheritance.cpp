#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    float salary;
    employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    employee(){}
    };

    class programmer: employee{
        public:
        programmer(int inpId){
            id= inpId;
        }
        int languagecode=9;
        void getData(){
            cout<<id<<endl;
        }
    };
int main(){
    employee harry(1) , rohan(2);
    cout<<harry.salary<<endl;
    cout<<harry.salary<<endl;
    programmer skillF(10); //object
    cout<<skillF.languagecode<<endl;
    skillF.getData();
return 0;
}