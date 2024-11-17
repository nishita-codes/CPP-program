#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
      void set_number(int a){
        roll_number=a;
    }
    void print_number(void){
        cout<<"Your roll number is "<<roll_number<<endl;
    }
};

class test:virtual public student{
    protected:
     float maths,physics;
     public:
     void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
     }
     void print_marks(void){
        cout<<"Your result is here:"<<endl<<"maths:"<<maths<<endl<<"physics:"<<physics<<endl;
     }
};

 class sports: virtual public student{
    protected:
    int score;
    public:
    void set_score(int sc){
        score=sc;
 }
 void print_score(void){
    cout<<"Your PT score is "<<score<<endl;
 }
 } ;

 class result:public test,public sports{
    private:
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is"<<total<<endl;

    }
 };

int main(){
 result nishita;
 nishita.set_number(4200);
 nishita.set_marks(78.9,99.5);
 nishita.set_score(9);
 nishita.display();

return 0;
}