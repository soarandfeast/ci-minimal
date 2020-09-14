#include <iostream>
#include "matlab/matlab.h"
#include "common/algorithm.h"

int add(int a, int b) {
    return a + b;
}

int main(int argc, char** argv) {
    std::cout << add(1, 2) << std::endl;
    std::cout << util::matlab::randi(10, 1)[0] << std::endl;
    std::cout << common::algorithm::is_permutation("abc", "cba") << std::endl;
}
