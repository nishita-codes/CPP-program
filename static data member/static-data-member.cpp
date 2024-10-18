#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
     void setData(void){
        cout<<"enter the id"<<endl;
        cin>>id;
     } 
     void getData(void){
        cout<<"the id of this employee is"<<id<<"and this is employee number "<<count<<endl;
        count++;
     }
};
int employee :: count=10;//default value is 0 //count is the static data member of class employee
int main(){
   employee rohan,nikhil;
   rohan.setData();
   rohan.getData();

   nikhil.setData();
   nikhil.getData();
return 0;
}