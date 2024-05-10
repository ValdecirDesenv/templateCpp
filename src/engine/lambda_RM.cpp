#include <iostream>
#include <vector>
#include <functional>
#include "lambda_RM.h"

#include <map>
#include <string>
#include <numeric>

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

void mapFilterReduce(){
    
    auto header = [](string title){
    cout << "---- " << title << " ----" << '\n';
    };
    
    auto render = [](auto collection) {
        for (const auto &val: collection) {
        cout << val << '\n';
        }
    };

    header("map");
    vector<int> inCollection{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> outCollection;
    
    //The std::transform function in C++ applies a given operation to each element of a sequence 
    //(such as a range in a container) and stores the result in another sequence. It's part of the C++ Standard
    //  template< class InputIt, class OutputIt, class UnaryOperation >
    //  OutputIt transform( InputIt first1, InputIt last1, OutputIt d_first, UnaryOperation unary_op );
    transform(inCollection.begin(), inCollection.end(), back_inserter(outCollection),
                [](const int &value) { return value * 3; });
    render(outCollection);

    header("filter");
    vector<int> filteredCollection;


    // The std::copy_if function in C++ copies elements from one range to another based on a specified condition. 
    // It's part of the C++ Standard Library's <algorithm> header.
    copy_if(outCollection.begin(), outCollection.end(), back_inserter(filteredCollection),
            [](int &value) { return value % 2 != 0; });
    render(filteredCollection);

    header("reduce");
    // The std::accumulate function in C++ calculates the sum of a range of elements or the result of a 
    // binary operation over a range. It's part of the C++ Standard Library's <numeric> header.
    int results = accumulate(filteredCollection.begin(), filteredCollection.end(),
                            0, [](int total, int current) {
            return total + current;
        });
    cout << "results: " << results << "\n";

}