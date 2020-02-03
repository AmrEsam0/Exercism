#include "difference_of_squares.h"

namespace difference_of_squares {
long square_of_sum(int range) {
    int sum = 0;
    long sq;
    for (int i = 1; i <= range; i++) {
        sum += i;
    }
    sq = sum * sum;
    return sq;
}

long sum_of_squares(int range) {
    long sum = 0;
    int sq;
    for (int i = 1; i <= range; i++) {
        sq = i * i;
        sum += sq;
    }
    return sum;
}

long difference(int range) {
    long diff = square_of_sum(range) - sum_of_squares(range);
    return diff;
}
}  // namespace difference_of_squares
