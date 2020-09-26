#include "gtest/gtest.h"
#include "common/algorithm.h"

TEST(is_permutation_test, both_empty) {
    ASSERT_TRUE(common::algorithm::is_permutation("", ""));
}

TEST(is_permutation_test, simple_false) {
    ASSERT_FALSE(common::algorithm::is_permutation("", "a"));
}

TEST(is_permutation_test, short_permutation) {
    ASSERT_TRUE(common::algorithm::is_permutation("abc", "bac"));
}

TEST(is_permutation_test, short_permutation1) {
    ASSERT_TRUE(common::algorithm::is_permutation("abc", "bac"));
}
