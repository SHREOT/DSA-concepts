#include<iostream>
using namespace std;
#include"staticproperty.cpp"

int main(){

    student s1; 
    student s8,d9; 
    student s2,s3,s4,s5,s6;


       s1.setrollnumber(20);
    //   cout<<s1.age;
     cout<<s1.rollnumber<<endl;
    //  cout<<student::totalstudent; as we made it private 
     cout<<student::gettotalstudent(); 

}