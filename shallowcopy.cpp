#include<iostream>
using namespace std;

class student{
private:
int age;


public :
char *name;
student(int age, char *name){
      this ->age = age;
      //shalow copy
    //   this ->name = name;  
    
    //deep copy
    this ->name =new char[strlen(name)+1];
    strcpy(this ->name , name);
}

// serious issue copy constructur infinite loop ban jaye ga
// s can be only used to read as it is constant refference to tthe addres passed
//  const is used because there will be no illigal changes in s
student(student const &s){
    this ->age = s.age;
    // this is shallow copy
    // this->name =s.name;

    // deep copy banao
    this ->name = new char[strlen(s.name)+1]; 
    strcpy(this->name,s.name);
}


void print(){
    cout<< name<<" "<<age<<endl;
}
};