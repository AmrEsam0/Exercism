#include "raindrops.h"

namespace raindrops {
string convert(int num) {
    string result;
    if (num % 3 == 0) {
        result = "Pling";
        if (num % 5 == 0) {
            result += "Plang";
            if (num % 7 == 0) {
                result += "Plong";
            }
        }
    } else if (num % 5 == 0) {
        result = "Plang";
        if (num % 7 == 0) {
            result += "Plong";
        }
    } else if (num % 7 == 0) {
        result = "Plong";
    } else {
        result = to_string(num);
    }
    return result;
}

}  // namespace raindrops
