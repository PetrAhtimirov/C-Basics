#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if ((c >= (a + b)) || (a >= (c + b)) || (b >= (a + c))) {
        std::cout << "UNDEFINED";
    } else if (((c*c) == (a*a + b*b)) || ((a*a) == (c*c + b*b)) || ((b*b) == (a*a + c*c))) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
