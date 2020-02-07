#include "binary.h"

namespace binary {
int convert(std::string str) {
    int output = 0, power = 0;
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == '1') {
            output += 1 << power;
            power++;
        } else if (str[i] == '0') {
            power++;
        } else {
            output = 0;
            break;
        }
    }
    return output;
}
}  // namespace binary
