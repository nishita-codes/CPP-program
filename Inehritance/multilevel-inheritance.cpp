#include<iostream>
using namespace std;

class student{
    protected:
     int roll_number;
    public:
     void set_roll_number(int);
     void get_rollnumber();
};
void student::set_roll_number(int r){
    roll_number=r;
}
void student::get_rollnumber(){
    cout<<"the roll  number is "<<roll_number<<endl;
}

class exam: public student{
    protected:
    float maths;
    float physics;
    public: 
    void set_marks(float m1 , float m2){
        maths=m1;
        physics=m2;
    }
    void get_marks(){
        cout<<"The marks obtained in maths is "<<maths<<endl;
        cout<<"The marks obtained in physics is "<<physics<<endl;
    }

};

class result: public exam{
    float percentage;
    public:
    void display_result(){
        get_rollnumber();
        get_marks();
        cout<<"The result is "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main(){
  result nishita;
  nishita.set_roll_number(321);
  nishita.set_marks(94.2,87.0);
  nishita.display_result();
return 0;
}