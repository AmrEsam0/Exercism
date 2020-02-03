#include "phone_number.h"

namespace phone_number {
phone_number::phone_number(string raw) {
    regex reg("[^\\d]");
    phone = regex_replace(raw, reg, "");
    if (phone.size() != 10) {
        if (phone.size() == 11 && phone[0] == '1') {
            phone = phone.substr(1);
        } else {
            phone = "0000000000";
        }
    }
}

string phone_number::number() const {
    return phone;
}

string phone_number::area_code() const {
    return phone.substr(0, 3);
}
}  // namespace phone_number
