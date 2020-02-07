#include "pascals_triangle.h"

namespace pascals_triangle {
std::vector<std::vector<int>> generate_rows(int n) {
    std::vector<std::vector<int>> rows;
    rows.reserve(n);
    for (int i = 0; i < n; i++) {
        std::vector<int> row;
        row.reserve(i + 1);  // avoid multiple resize operations
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                row.push_back(1);
            } else {
                row.push_back(rows[i - 1][j - 1] + rows[i - 1][j]);
            }
        }
        // avoid creating an expensive copy of row
        rows.push_back(std::move(row));
    }
    return rows;
}
}  // namespace pascals_triangle
