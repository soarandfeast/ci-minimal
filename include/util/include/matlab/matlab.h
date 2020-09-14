#pragma once
#include <vector>

namespace util {
// Matlab-like functions
namespace matlab {
// Return `len` integers larger or equal to `lower` and smaller or equal to `upper`.
std::vector<int> randi(int upper, std::size_t len);
std::vector<int> randi(int lower, int upper, std::size_t len);
}
}