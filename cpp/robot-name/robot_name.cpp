#include "robot_name.h"

namespace robot_name {

std::string n;
std::string robot_name::robot::genName() {
    std::random_device rd;
    std::uniform_int_distribution<int> numDist(0, 9);
    std::uniform_int_distribution<int> alphaDist(0, 25);
    const char* alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    n = alpha[alphaDist(rd)];
    n += alpha[alphaDist(rd)];
    n += std::to_string(numDist(rd));
    n += std::to_string(numDist(rd));
    n += std::to_string(numDist(rd));
    return n;
}

std::string robot_name::robot::name() const {
    return n;
}

robot_name::robot::robot() {
    n = genName();
}

void robot_name::robot::reset() {
    std::string oldName = n;
    n.clear();
    while (oldName == genName()) {
        n = genName();
    }
}

}  // namespace robot_name
