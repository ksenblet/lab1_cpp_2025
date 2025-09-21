#include <gtest/gtest.h>

#include "function.hpp"

TEST(FunctionTest, BasicTest) {
    EXPECT_EQ(Function(1, 1), 1);    
    EXPECT_EQ(Function(1, 2), 2);    
    EXPECT_EQ(Function(2, 7), 11);    
}

TEST(FunctionTest, ZeroTest) {
    EXPECT_EQ(Function(0, 0), 0);    
    EXPECT_EQ(Function(0, 1), 1);    
}

TEST(FunctionTest, ReversTest) {
    EXPECT_EQ(Function(2, 1), 2);    
    EXPECT_EQ(Function(7, 2), 11);    
}

TEST(FunctionTest, TwinsTest) {
    EXPECT_EQ(Function(2, 2), 1);   
    EXPECT_EQ(Function(4, 4), 1);    
    EXPECT_EQ(Function(8, 8), 1);    
}

TEST(FunctionTest, AllOnes) {
    EXPECT_EQ(Function(3, 3), 2);    
    EXPECT_EQ(Function(7, 7), 3);    
    EXPECT_EQ(Function(15, 15), 4);  
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}