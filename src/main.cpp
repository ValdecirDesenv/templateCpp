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
#include "myLibs/myCallendar.h"
#include "engine/regularLoops.h"
#include "engine/MCU.h"
#include <vector>
#include <functional>
#include "lambda_RM.h"

using namespace std;
int main(int argc, char const *argv[])
{
    // Declare and instantiate an object of MyClass
    MyClass obj(10, "Hello");
    Regular_loops loops;
    // // Call a member function of the object
    obj.display();
    cout << " Just running from test Demo at src folder ";
    myCallendar();
    loops.runAllLoops();
    // ------------------------------------------------
    MCU myMCU = MCU::ARDUINO;
    switch (myMCU) {
        case MCU::BSOM:
            std::cout << "Using BSOM\n";
            break;
        case MCU::ATMEL:
            std::cout << "Using ATMEL\n";
            break;
        case MCU::ARDUINO:
            std::cout << "Using Arduino\n";
            break;
        case MCU::RASPBERRY_PI:
            std::cout << "Using Raspberry Pi\n";
            break;
    }
    //-------------------------------------------------
    

    lambdaBrowsing(); // Testing FROM lambda_RM  
    return 0;
}