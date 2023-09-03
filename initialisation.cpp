#include<iostream>
using namespace std;

class student
{
public:

    int &x;     //age reference variable
    int age;
    const int rollnumber;
    //   initialisation of constant type 
    // no need to use this ase  this ke age me argument ka age ja rha hai
    student(int r, int age) :rollnumber(r),age(age), x(this->age){
        // rollnumber =r;
    }

    void print(){
        cout<<rollnumber<<" "<<age;
    }

};