/*
 * 	Recursion mind refresh
 *
 *  Created on: Mar. 13, 2024
 *      Author: vdc
 */
#include <iostream>
#include <gtest/gtest.h>

//==============================================================
/**
 * That Function do the multiplication of two given number usring recursion
 * instead of using regular multiplication
 * Get to know that a multiplication is a some of the given number until the
 * given second number
 * @param x
 * @param y
 * @return
 * Example x=2, y=3 then
 * 1) y > 0 then stack 2 + f(2,2)
 * 2) y > 0 then stack 2 + f(2,1)
 * 3) y > 0 then stack 2 + f(2,0)
 * 4) y = 0 then return 0;
 * stack back 3) return 2 + 0;
 * stack back 2) return 2 + 2;
 * stack back 1) return 2 + 4;
 * return 6
 */
int multiply(int x, int y) {
    if (y == 0) {
        return 0;
    }

    if (y > 0) {
        return (x + multiply(x, y - 1));
    }

    if (y < 0) {
        return -multiply(x, -y);
    }
    return -1;
}

//==============================================================
/**
 * Factorial Calculation:
	That is a recursive function to compute the
	factorial of a non-negative integer n, denoted by n!.
	The factorial of n is the product of all positive integers
	less than or equal to n.
    math: 3! -> 3 x 2 x 1 = 6
 */

int factorial(double value) {
	// Kind of break condition
    // Base case: factorial of 0 is 1
    if (value == 0.0){
        return 1.0;
    }
    // Recursive case: factorial of n is n * factorial(n-1)
    return value * factorial(value - 1.0);
}

//==============================================================
/**
 * Recursive function to compute the nth Fibonacci number,
 * where the Fibonacci sequence is defined as follows:

	Fibonacci(0) = 0
	Fibonacci(1) = 1
	Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2), for n > 1
 */
int fibonacci(int n){
    // Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
    if (n == 0) return 0;
    if (n == 1) return 1;

	printf("n: %d \n", n);
    // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);

}
//TODO NOT OK
int fibonacciSomeOfnTerms(int n, int  &sum){
    if (n <= 0) {
    	return 0;
    }
    if (n == 1) {
        sum += 1; // Base case: Sum of first Fibonacci number is 1
        return 1;
    }

    // Recursive case: Compute the nth Fibonacci number and its sum
    if ( n > 1){
		int fib = fibonacciSomeOfnTerms(n - 1, sum) + fibonacciSomeOfnTerms(n - 2, sum);
		sum = fib; // Add the nth Fibonacci number to the sum
		printf("sum: %d \n", sum);
		return fib;
    }
    return -1;
}

// All tests must live within TEST* blocks
// Inside of the TEST block is a standard C++ scope
// TestTopic defines a topic of our test, e.g. NameOfFunctionTest
// TrivialEquality represents the name of this particular test
// It should be descriptive and readable to the user
// TEST is a macro, i.e., preprocessor replaces it with some code
TEST(Topic_fibonacci, TrivialEquality) {
  // We can test for equality, inequality etc.
  // If the equality does not hold, the test fails.
  // EXPECT_* are macros, i.e., also replaced by the preprocessor.
  EXPECT_EQ(fibonacci(4), 24);
}
