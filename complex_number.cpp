#include<iostream>
using namespace std;

class complexnumber{
   private:
   int real;
   int image;
   public:
   complexnumber(int real,int image){
    this ->real =real;
    this ->image =image;
   }
   void print(){
    cout<<this ->real<<"+"<<"i"<<image<<endl;
   }
   complexnumber(int real){
    this ->real =real;
    // this ->image =image;
   }

   void add(complexnumber c2 ){
    int k = this ->real + c2.real;
    int j = this ->image + c2.image;
    real =k;
    image =j;
   }

   
    
};