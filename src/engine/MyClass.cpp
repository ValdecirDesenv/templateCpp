#include "MyClass.h"

// Constructor implementation
MyClass::MyClass(int i, const std::string& s) : myInt(i), myString(s) {}

// Member function implementation
void MyClass::display() {
    std::cout << "Integer: " << myInt << ", String: " << myString << std::endl;
}

enum class MCU{
    BSOM, 
    ATMEL,
    ARDUINO,
    RASPBERRYpI
};