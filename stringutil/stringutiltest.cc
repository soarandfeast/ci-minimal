#include <gtest/gtest.h>
#include "stringutil.h"

TEST(stringutiltest, both_empty) {
    ASSERT_TRUE(stringutil::is_permutation("", ""));
}

TEST(stringutiltest, simple_false) {
    ASSERT_FALSE(stringutil::is_permutation("", "a"));
}

TEST(stringutiltest, short_permutation) {
    ASSERT_TRUE(stringutil::is_permutation("abc", "bac"));
}

TEST(stringutiltest, short_permutation1) {
    ASSERT_TRUE(stringutil::is_permutation("abc", "bac"));
}
