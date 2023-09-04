//Interface

#ifndef SOME_CLASS_HPP_
#define SOME_CLASS_HPP_
#include <somelibrary>
#include “AnotherClass.hpp”
class SomeClass
{
public:
    SomeClass(); //Constructor
        int methodOne();
        bool methodTwo();
        bool methodThree(int someParameter);

private:
    int data_member_one_;
    bool data_member_two_;
}; //end SomeClass
#endif