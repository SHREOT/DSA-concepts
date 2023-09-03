#include<iostream>
using namespace std;
#include"studentname.cpp"

int main(){
 char name[]="abcd";
  student s1(20,name);

  name[3] ='e'; 
  student s2(24,name);

  s1.print();
  s2.print();

}