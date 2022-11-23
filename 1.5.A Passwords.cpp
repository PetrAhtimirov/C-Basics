#include <iostream>
#include <cctype>
#include <vector>
#include <string>

int main() {
    int upper = 0;
    int lower = 0;
    int digit = 0;
    int other = 0;
    std::string password;
    std::getline(std::cin, password);

    if ((password.size() < 8) || (password.size() > 14)) {
        std::cout << "NO";
        return 0;
    }

    for (char c : password) {
        if (c < 33 || c > 126) {
            std::cout << "NO";
            return 0;
        }
        if ('A' <= c && c <= 'Z') {
            upper = 1;
        } else if ('a' <= c && c <= 'z') {
            lower = 1;
        } else if ('0' <= c && c <= '9') {
            digit = 1;
        } else {
            other = 1;
        }
    }


    if (lower + upper + digit + other >= 3) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
