#include <iostream>
#include <algorithm>
#include <string>

std::string incrementString (const std::string &str) {
    std::string tmp = NULL;
    std::copy_if (str.begin(), str.end(), tmp, [](char i) {return (isdigit (i)) ? i : i;});
    return tmp;
}

int main () {
    std::string tmp = "a1234";
    // for (char i : tmp) if (isdigit (i)) std::cout << i << std::endl;
    std::cout << incrementString (tmp) << std::endl;
}