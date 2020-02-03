#include "etl.h"

namespace etl {
map<char, int> transform(const map<int, vector<char>>& oldDic) {
    map<char, int> newDic;
    for (auto it = oldDic.begin(); it != oldDic.end(); it++) {
        for (auto jt = it->second.begin(); jt != it->second.end(); jt++)
            newDic[(char)::tolower(*jt)] = (int)it->first;
    }
    return newDic;
}

}  // namespace etl
