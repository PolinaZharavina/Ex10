// Copyright 2021 PollyllyZh
#include <iostream>
#include <string>

#include "postfix.h"

int main() {
    std::string inf1("2 + 2");
    std::string postinf1 = infix2postfix(inf1);
    std::cout << postinf1;  // 2 2 +
    std::string inf2("2 + 6 * 3 / (4 - 2)");
    std::string postinf2 = infix2postfix(inf2);
    std::cout << postinf2;  // 2 6 3 * 4 2 - / +
    std::string inf3("(2 + 8.3) * (6 - 3.2)");
    std::string postinf3 = infix2postfix(inf3);
    std::cout << postinf3;  // 2 8.3 + 6 3.2 - *
    std::string inf4("(6 * (4 - 2) + 5) * (2.6 + 3 * 7) - 9");
    std::string postinf4 = infix2postfix(inf4);
    std::cout << postinf4;  // 6 4 2 - * 5 + 2.6 3 7 * + * 9 -
    return 0;
}
