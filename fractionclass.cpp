#include<iostream>
using namespace std;
class fraction{
    private :
    int numerator;
    int denominator;
    public :
    fraction(int numerator,int denominator){
        this ->numerator =numerator;
        this ->denominator=denominator;
    }
    //this two are not changing any propert
    int getnumerator() const{
        return numerator;

    }
    int getdenominator() const{
        return denominator;

    }
    void getdenominator(int d) {
        denominator = d;
    }
    void getnumerator(int n) {
        numerator =n;
    }
      


    void print() const{
        cout<<this-> numerator<<"/"<<denominator<<endl;
    }
    //cannot be constant
    void simplify(){
        int gcd =1;
        int j = min(this ->numerator,this->denominator);
        for(int i =1;i<=j;i++){
            if(this ->numerator%i == 0 && this->denominator%i ==0){
                gcd =i;
            }
        }
        this ->numerator = this ->numerator/gcd;

        this->denominator = this->denominator/gcd;

    }
    fraction add(fraction f2){
      int lcm = denominator*f2.denominator;
      int x=lcm/denominator;
      int y=lcm/f2.denominator;
      int num =x*numerator+(y*f2.numerator);
       fraction fnew(num,lcm);

       fnew.simplify();
       return fnew;
    //   numerator=num; //implictly this ke me matlab f1 me
    //   denominator=lcm;
       //



    }
       fraction operator+(fraction const &f2){
      int lcm = denominator*f2.denominator;
      int x=lcm/denominator;
      int y=lcm/f2.denominator;
      int num =x*numerator+(y*f2.numerator);
       fraction fnew(num,lcm);

       fnew.simplify();
       return fnew;
    //   numerator=num; //implictly this ke me matlab f1 me
    //   denominator=lcm;
       //



    }
    // simplify();
     
   fraction operator*(fraction f2){
       int n = numerator*f2.numerator;
       int d = denominator*f2.denominator;

       fraction fnew=fraction(n,d);
       fnew.simplify();
       return fnew;

   }

     bool operator==(fraction f2){
        return (numerator == f2.numerator&&denominator == f2.denominator);
        
        

     } 
 // pre increment operator
     fraction& operator++(){
         numerator = numerator +denominator; 
         simplify();
         return  *this;
     }

     // *** POST INCREMENT ***//
    
    fraction operator++(int){
             fraction fnew(numerator,denominator);
             numerator = numerator + denominator;
             simplify();
             fnew.simplify();
             return fnew;
    }
    fraction& operator +=(fraction const &f2){
          
      int lcm = denominator*f2.denominator;
      int x=lcm/denominator;
      int y=lcm/f2.denominator;
      int num =x*numerator+(y*f2.numerator);
      numerator  = num;
      denominator = lcm;

       simplify();

       return *this;
    }


};