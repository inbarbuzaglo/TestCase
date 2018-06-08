#pragma once
#include <iostream>
#include <string>

using namespace std;

static int counter=0;


class TestCase{
   
    string name;
    ostream& out;
  
    public:    
    TestCase(string name, ostream& out);
    template<typename T> TestCase& check_equal(T ob1,T ob2)const;
    template<typename T> TestCase& check_different(T ob1,T ob2)const;
    template<typename T> TestCase& check_function(void*,T ob1,T ob2)const;
};
