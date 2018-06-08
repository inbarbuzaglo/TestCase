#include <iostream>
#include <string>
#include <functional>
#include "TestCase.hpp"
using namespace std;

//כשניסיתי לכתוב בנאי בצורה הזו , לא קיבלתי שגיאה 

TestCase::TestCase(string test, ostream& outStream) :  name(test) , out(outStream) {}

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

   template<typename T,typename Function,typename Arg> TestCase& TestCase::check_function(Function f,Arg arg,T ob2)
    {
        counter++;
        T func=f(arg);//פונקציה מקבלת arg
        if(func!=ob2)
        {

			this->out<<"Function should return "<<ob2<<" but returned"<<arg<<"!";
        }
        return &this;
    }
    template<typename T> TestCase& TestCase::check_output(T ob1,string name)
   {
       counter++;
       //המרה לסטרינג
       ostringstream b1;
       b1<<ob1;
       if(b1.str()!=name)
       {
             this->out<<"string value should be"<<name<<" but is"<<b1.str();
       }
       return &this;

   }
   void TestCase::print()
{ 
      this->out << counter << "failed," << endl;
    this->out << counter << " passed," << endl;
	this->out << counter << " total." << endl;
}
