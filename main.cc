#include <iostream>
#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

GTEST_API_ int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(test, c1) {
    EXPECT_EQ(3, add(1, 2));
    EXPECT_EQ(8, add(2, 6));
}