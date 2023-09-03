#include<iostream>
using namespace std;
#include"complex_number.cpp"
int main(){
       complexnumber c1(10,3);
       complexnumber c2(6,5);

       c1.print();
       c2.print();
       complexnumber c3(6);
       c3.print();

       c1.add(c2);
       c1.print();
}