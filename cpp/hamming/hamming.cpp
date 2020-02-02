#include "hamming.h"

namespace hamming {
int compute(string str1, string str2) {
    int ham = 0;
    for (int i = 0; i < int(str1.length()); i++) {
        if (str1[i] != str2[i]) {
            ham += 1;
        }
    }
    return ham;
}
}  // namespace hamming
