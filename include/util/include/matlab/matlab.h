#pragma once
#include <vector>

namespace util {
namespace matlab {
std::vector<int> randi(int upper, std::size_t len);
std::vector<int> randi(int lower, int upper, std::size_t len);
}
}