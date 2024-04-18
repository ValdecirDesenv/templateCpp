//============================================================================
// Name        : my_test.cpp
// Author      : Valdecir Oliveira
// Version     :
// Copyright   : GPL3
// Description : Testing Gtest in C++, Ansi-style
//============================================================================

// Must include the gtest header to use the testing library
#include <gtest/gtest.h>
#include<stdio.h>

namespace {
  // We will test this dummy function but you can test
  // any function from any library that you write too.
  int GetMeaningOfLife() {  return 42; }
}

using namespace std;
int main(int argc, char const *argv[])
{
    cout << " Just running from test Demo at src folder ";
    return 0;
}


// All tests must live within TEST* blocks
// Inside of the TEST block is a standard C++ scope
// TestTopic defines a topic of our test, e.g. NameOfFunctionTest
// TrivialEquality represents the name of this particular test
// It should be descriptive and readable to the user
// TEST is a macro, i.e., preprocessor replaces it with some code
TEST(TestTopic, TrivialEquality) {
  // We can test for equality, inequality etc.
  // If the equality does not hold, the test fails.
  // EXPECT_* are macros, i.e., also replaced by the preprocessor.
  EXPECT_EQ(GetMeaningOfLife(), 42);
}

TEST(TestTopic, MoreEqualityTests) {
  // ASSERT_* is similar to EXPECT_* but stops the execution
  // of the test if fails.
  // EXPECT_* continues execution on failure too.
  ASSERT_EQ(GetMeaningOfLife(), 42) << "Oh no, a mistake!";
  EXPECT_FLOAT_EQ(23.23F, 23.23F);
}