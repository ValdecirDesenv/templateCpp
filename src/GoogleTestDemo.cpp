// Must include the gtest header to use the testing library
#include <gtest/gtest.h>
#include<stdio.h>

struct Player
{
    int level = 0;

    Player(){}
    
    explicit Player(const int level)
    : level{level}
    {
    }
};


// All tests must live within TEST* blocks
// Inside of the TEST block is a standard C++ scope
// TestTopic defines a topic of our test, e.g. NameOfFunctionTest
// TrivialEquality represents the name of this particular test
// It should be descriptive and readable to the user
// TEST is a macro, i.e., preprocessor replaces it with some code
TEST(PlayerTest, PlayerLevelStartZero)
{
    // We can test for equality, inequality etc.
    // If the equality does not hold, the test fails.
    // EXPECT_* are macros, i.e., also replaced by the preprocessor.
    Player player;
    EXPECT_EQ(0, player.level);
}

using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " Just running from test Demo at src folder ";
//     return 0;
// }



