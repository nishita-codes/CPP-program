#include<iostream>
using namespace std;
//union is user define data type which provide better memory management...
union money
{
    int rice;
    char car;
    float pounds;
};
int main(){
union money m1;
m1.rice=34;
m1.car='c';
m1.pounds=56; //jo last me define hoga usi ki memory share hogi...
cout<<m1.rice<<endl;
cout<<m1.car<<endl;
cout<<m1.pounds<<endl;
return 0;
}