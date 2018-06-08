#include <iostream>
#include <string>
#include "TestCase.hpp"
using namespace std;


   TestCase::TestCase(string name, ostream& out)
   {
       this->name=name;

       //should define the ostream as class member and initiliize it
   }


   template<typename T> TestCase& TestCase::check_equal(T ob1,T ob2)const
   {
       counter++;
       if(ob1!=ob2)
       {
           this->out<<"Failure in test"<<counter<<"the parameters is not equal!";
       }
        retrun &this;     
   }

     template<typename T> TestCase& TestCase::check_different(T ob1,T ob2)const
   {
       counter++;
       if(ob1==ob2)
       {
           this->out<<"Failure in test"<<counter<<"the parameters is not diffrent!";
       }
        retrun &this;     
   }

   /** template<typename T> TestCase& TestCase::check_function(,T ob1,T ob2)const
    {
        return &this;
    }
    **/
   

 
