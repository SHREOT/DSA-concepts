#include<iostream>
using namespace std;
#include"fractionclass.cpp"

int main(){
    fraction f1(10,3);
    fraction f2(5,2);
      
    fraction f3 = f1.add(f2);
    f3.print(); 
    f1.print();
    f2.print();
    fraction f4 = f1+f2;

    f4.print();
    fraction f5=f1*f2;
    f5.print();


    
    


    // overloading pre increment operator by void function
/*f1.print();
f1.simplify();
f1.print(); 
++f1;
f1.print(); 
fraction f3=++f1;
f.print();*/


//  *** nested pre increment *** //
/*fraction f6 = ++f1;
cout<<"**"<<endl;
f6.print();
fraction f7 = ++(++f1); 
f6.print();
f1.print();
f7.print();*/






//const phele ya bad me bhi likh sak te hai
    // const fraction f3;

   //cantdo this as f3 is constant 
//    cout<<f3.getdenominator()<<" "<<f3.getnumerator(); 
    // f3.setnumerator(10);   

    /*f1.print();
    f2.print();


     f1.add(f2);
     f1.print();
     f2.print();
     f1.print();
     f1.simplify();
     f1.print(); */
 
   /*post increment*/

/*
fraction f10 =f1++;
     cout<< "***"<<endl;
     f1.print();
     f10.print();*/
     
    /*  +=  overloading  */
     // nested not for void as no previous data type to add
     (f1+=f2)+=f2;
     f1.print();
     f2.print();

}