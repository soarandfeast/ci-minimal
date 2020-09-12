#include <iostream>
#include "stringutil.h"
#include "matlab/matlab.h"

int add(int a, int b) {
    return a + b;
}

int main(int argc, char** argv) {
    std::cout << add(1, 2) << std::endl;
    std::cout << stringutil::is_permutation("abc", "cba") << std::endl;
    std::cout << util::matlab::randi(10, 1)[0] << std::endl;
}
