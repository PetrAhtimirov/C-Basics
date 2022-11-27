#include <string>
#include <iostream>
#include <algorithm>

int main () {
    std::string s;
    std::getline(std::cin, s);
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    std::string n = s;
    std::reverse(s.begin(), s.end());

    if (n == s) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}