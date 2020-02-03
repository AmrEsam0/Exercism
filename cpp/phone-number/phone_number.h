#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H
#include <regex>
#include <string>
using namespace std;

namespace phone_number {
class phone_number {
    string phone;

   public:
    phone_number(string raw);
    string number() const;
    string area_code() const;
    operator std::string() const {
        return "(" + phone.substr(0, 3) + ") " + phone.substr(3, 3) + "-" +
               phone.substr(6);
    }
};

}  // namespace phone_number

#endif  // PHONE_NUMBER_H