#include "roman_numerals.h"

namespace roman_numerals {
string convert(int num) {
    string result;
    const vector<pair<int, string>> values{
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
        {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
        {5, "V"},    {4, "IV"},   {1, "I"}};

    for (auto v : values) {
        auto val = v.first;
        auto number = v.second;
        while (num >= val) {
            num -= val;
            result += number;
        }
    }

    return result;
}
}  // namespace roman_numerals
