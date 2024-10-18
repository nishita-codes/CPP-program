#include<iostream>
using namespace std;

class shop{
    int itemID[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void){counter=0;}
    void Setprice(void);
    void Displayprice(void);

};
void shop:: Setprice(void){
    cout<<"enter ID of your item"<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: Displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item with id"<<itemID[i]<< " is " <<itemprice[i]<<endl;
    }
}
 int main(){
  shop dukan;
  dukan.initcounter();
  dukan.Setprice();
  dukan.Setprice();
  dukan.Setprice();
  dukan.Displayprice();
  
return 0;
}