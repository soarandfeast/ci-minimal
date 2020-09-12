#include <random>
#include "matlab.h"

namespace {
std::random_device seed;  // Standard mersenne_twister_engine seeded with seed()
std::mt19937 gen(seed());
}

std::vector<int> Matlab::randi(int upper, size_t len) {
    return randi(1, upper, len);
}

std::vector<int> Matlab::randi(int lower, int upper, size_t len) {
    std::vector<int> res(len);
    std::uniform_int_distribution<> uniform_int_dist(lower, upper);
    for (auto& n : res) {
        n = uniform_int_dist(gen);
    }

    return res;
}
