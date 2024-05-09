#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <string>

class MyClass {
public:
    // Member variables
    int myInt;
    std::string myString;

    // Constructor
    MyClass(int i, const std::string& s);

    // Member function
    void display();
};

#endif