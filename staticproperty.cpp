#include<iostream>
using namespace std;

class student {
//by default all properties are non static
    static int totalstudent;
    
    public :
    int rollnumber;
    int age;


    // static int totalstudent;
    student(){
        totalstudent++;
    }
    int getrollnumber(){
        return rollnumber;
    }
    // this function completly bellongs to the class
    static int gettotalstudent(){
        return totalstudent;  
    }

    void setrollnumber(int rollnumber){
        this->rollnumber = rollnumber;
    }
    //which bellong to class and is same for all objects
};
int student::totalstudent = 0;
 