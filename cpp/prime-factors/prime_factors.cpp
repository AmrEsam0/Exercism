#include "prime_factors.h"

namespace prime_factors {
vector<int> of(int num) {
    vector<int> primes;
    int div = 2;
    while (num != 1) {
        if (num % div == 0) {
            primes.push_back(div);
            num /= div;
        } else {
            div += 1;
        }
    }

    return primes;
}
}  // namespace prime_factors
