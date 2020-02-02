#include "bob.h"

namespace bob {
bool isAllUp(string str) {
    return any_of(str.begin(), str.end() - 1, isupper) &&
           all_of(str.begin(), str.end() - 1, islower);
}

bool isQuestion(string str) {
    return str[str.length() - 1] == '?';
}

bool oneIsLow(string str) {
    return any_of(str.begin(), str.end() - 1, islower);
}

string hey(string str) {
    if (isQuestion(str)) {
        if (isAllUp(str)) {
            return "Calm down, I know what I'm doing!";
        } else {
            return "Sure.";
        }
    } else if (oneIsLow(str)) {
        return "Whatever.";
    } else if (isAllUp(str) && !isQuestion(str)) {
        return "Whoa, chill out!";
    } else {
        return "Fine. Be that way!";
    }
}
}  // namespace bob
