//#include <multiply/multiply.h>
#include <gtest/gtest.h>

#include <iostream>

#include "../Adder/Example.hpp" // ./Adder/Example.hpp>

TEST(Hello, world) {
    std::cout << "Hello, world in gtest!" << std::endl;
    EXPECT_TRUE(true);
}

TEST(Hello, world1) {
    std::cout << "New test with lib!" << std::endl;
    EXPECT_EQ(Calculator::getNumberNine(), 9);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}