#pragma once
#include <string_view>

namespace common{
namespace algorithm {
// Check is two strings are permutations of each other.
//
// If two strings are permutations, you can form one string by rearranging
// another one, without adding or deleting any character.
bool is_permutation(std::string_view s1, std::string_view s2);
}
}