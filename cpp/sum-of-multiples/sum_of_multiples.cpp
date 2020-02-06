#include "sum_of_multiples.h"

namespace sum_of_multiples {
int to(vector<int> factors, int limit) {
    int sum = 0;
    for (int i = 0; i < limit; i++) {
        for (int x : factors) {
            if (i % x == 0) {
                sum += i;
            }
        }
    }
    return sum;
}
}  // namespace sum_of_multiples
