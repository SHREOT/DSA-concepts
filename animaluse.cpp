#include<iostream>
using namespace std; 
#include "ANIMAL.CPP"
int main(){
animal ramesh;
ramesh.age =12;
ramesh.name="ramesh";
cout<<ramesh.age<<"***"<<endl;
cout<< ramesh.name<<endl;

ramesh.eat(); 
}