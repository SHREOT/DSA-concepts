#include<iostream>
using namespace std;
#include"shallowcopy.cpp"

int main(){
 char name[]="abcd";
  student s1(20,name);
 s1.print();
  student s2(s1);
  s2.name[0] ='x';
  s1.print();
  s2.print(); 
  // name[3] ='e'; 
  // student s2(28,name);

  // s1.print();
  // s2.print();

}