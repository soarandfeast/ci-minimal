#include <gtest/gtest.h>
#include "common/algorithm.h"

TEST(stringutiltest, both_empty) {
    ASSERT_TRUE(common::algorithm::is_permutation("", ""));
}

TEST(stringutiltest, simple_false) {
    ASSERT_FALSE(common::algorithm::is_permutation("", "a"));
}

TEST(stringutiltest, short_permutation) {
    ASSERT_TRUE(common::algorithm::is_permutation("abc", "bac"));
}

TEST(stringutiltest, short_permutation1) {
    ASSERT_TRUE(common::algorithm::is_permutation("abc", "bac"));
}
