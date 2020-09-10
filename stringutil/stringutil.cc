#include "stringutil.h"

bool stringutil::is_permutation(std::string_view s1, std::string_view s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    int hist[256] = {0};
    for (int i = 0; i < s1.length(); ++i) {
        ++hist[s1[i]];
    }

    for (int i = 0; i < s2.length(); ++i) {
        if (hist[s2[i]] == 0) {
            return false;
        }

        --hist[s2[i]];
    }

    return true;
}
