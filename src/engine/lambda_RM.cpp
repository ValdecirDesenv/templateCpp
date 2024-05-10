#include <iostream>
#include <vector>
#include <functional>
#include "lambda_RM.h"

#include <map>
#include <string>

using namespace std;
void lambdaBrowsing(){
    // Lambda expression
    // [](){}       => means
    /*-------------------------------------------
    
    [capture_list] (parameter_list) -> return_type {
        // lambda body
    }  
    */
    //---------------------------------------------

    // Lambda definition
// Lambda definition
    auto sum = [](int a, int b) -> int {
        return a + b;
    };

    // Usage
    int result2 = sum(3, 4); // result is 7


    // Lampda Expression ------------------------------
    vector<int> values = {3,4,6,7,8,3,4,6,2,3,1};
    auto biggerThem = find_if(values.begin(), values.end(), [](int value){ return value > 4; } );
    cout << *biggerThem << endl;
    
    // Create a new vector to store the values greater than 4
    std::vector<int> result;
    // Use std::copy_if to copy elements greater than 4 into the result vector
    std::copy_if(values.begin(), values.end(), std::back_inserter(result),
                 [](int value) { return value > 4; });

    // Print the result
    std::cout << "Values greater than 4: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

}