#include <iostream>
#include <vector>
#include <functional>
#include "lambda_RM.h"

using namespace std;
void lambdaBrowsing(){

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