#include <iostream>

int main() {
    int sum = 0;
    char x;
    while (true) {
        x = std::cin.get();

        if (x == '\n') {
            break;
        }

        sum += x - '0';
    }
    std::cout << sum << "\n";

    return 0;
}
