#include<iostream>
using namespace std;
//structure is user-define data type...in which we can use any type of data type in there entities..
struct employee
{
    int id;
    char favchar;
    float salary;
};
int main(){
struct employee nishita;
nishita.id=56;
nishita.favchar='n';
nishita.salary=1200000;

cout<<nishita.id<<endl;
cout<<nishita.favchar<<endl;
cout<<nishita.salary<<endl;
return 0;
}