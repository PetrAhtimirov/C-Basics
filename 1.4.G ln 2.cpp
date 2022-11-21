#include <iostream>
#include <cmath>

int main() {
    double sum = 0;
    int k;
    std::cin >> k;

    for (int i = 1; i < (k + 1); i++) {
        sum += (pow(-1, i+1) * (1/double(i)));
    }

    std::cout << sum;

    return 0;
}
