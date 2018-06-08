#pragma once
#include <string>
#include <functional>
#include <iostream>
#include <sstream>

using namespace std;

static int counter=0;


class TestCase{
   
    string name;
    ostream& out;
  
    public:    
    TestCase(string test, ostream& outStream);
    template<typename T> TestCase& check_equal(T ob1,T ob2)const;
    template<typename T> TestCase& check_different(T ob1,T ob2)const;
    template<typename T,typename Function,typename Arg> TestCase& check_function(Function f,Arg arg,T ob2);
    template<typename T> TestCase& check_output(T ob1,string name);
    void print();

};
