#include "trinary.h"

namespace trinary {
int to_decimal(string str) {
    int sum = 0, multiplier = 0;
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] != '0') {
            sum += (str[i] - '0') * pow(3, multiplier);
            multiplier++;
        } else {
            multiplier++;
        }
    }
    return sum;
}
}  // namespace trinary
