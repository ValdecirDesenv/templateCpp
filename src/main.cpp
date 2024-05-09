//============================================================================
// Name        : my_test.cpp
// Author      : Valdecir Oliveira
// Version     :
// Copyright   : GPL3
// Description : Testing Gtest in C++, Ansi-style
//============================================================================

// Must include the gtest header to use the testing library
#include <iostream>
#include "engine/MyClass.h"

using namespace std;
int main(int argc, char const *argv[])
{
    // Declare and instantiate an object of MyClass
    MyClass obj(10, "Hello");

    // // Call a member function of the object
    obj.display();
    cout << " Just running from test Demo at src folder ";
    

    
    return 0;
}