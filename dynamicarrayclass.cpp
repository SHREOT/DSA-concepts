#include<iostream>
using namespace std;

class dynamicarray{

    private :
    int *data;
    int nextindex;
    int capacity;

    public :

    dynamicarray(){
        data = new int[5];
        nextindex =0;
        capacity = 5;
    }
    void add(int element){
        if(nextindex == capacity){
         int *newdata = new int [2*capacity];
         for(int i =0 ;i< capacity ;i++){
             newdata[i]=data[i];
             }
             delete [] data;
             data = newdata;
             capacity *= 2;
        }
        data[nextindex] =element;
        nextindex++;
    }


    int get(int i)const{
        if(i<nextindex){
            return data[i];

        }

        return -1; 
    }
    void add(int i ,int element){
         if(i<nextindex){
            data[i]=element;
         }
         else if(i==nextindex){
            add(element);
         }

         else{
            return;
         }
    }
    void print()const{
        for(int i=0;i<nextindex;i++){
            cout<<data[i]<<"  ";
        }
        cout<<endl;
    }

     dynamicarray(dynamicarray const &d){
         this-> data = new int[d.capacity];
         for(int i=0;i<d.nextindex;i++){
            this->data[i]=d.data[i];
         }
         this->nextindex = d.nextindex;
         this->capacity = d.capacity;
     }

     void operator=(dynamicarray const &d){
        this-> data = new int[d.capacity];
         for(int i=0;i<d.nextindex;i++){
            this->data[i]=d.data[i];
         }
         this->nextindex = d.nextindex;
         this->capacity = d.capacity;
     }
};