#ifndef BCRYPT_H
#define BCRYPT_H

#include <string>
#include <string_view>

namespace bcrypt {

    [[nodiscard]]
    std::string generateHash(std::string_view password , unsigned rounds = 10 );

    [[nodiscard]]
    bool validatePassword(std::string_view password, std::string_view hash);

}

#endif // BCRYPT_H
