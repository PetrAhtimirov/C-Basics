#include <iostream>

int main () {
    int n, k;
    std::cin >> n;
    std::cin >> k;

    for (int i = 1; i < n; i++) {
        std::cout << "   ";
    }

    for (int i = 1; i <= k; i++) {
        if (i < 10) {
            std::cout << " ";
        }

        std::cout << i;

        if (((n + i - 1) % 7) == 0) {
            std::cout << "\n";
        } else {
            std::cout << " ";
        }
    }

    return 0;
}
