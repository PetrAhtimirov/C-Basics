#include <iostream>
#include <vector>
#include <string>

template <typename Container>
void Print(const Container& data, const std::string& delimiter) {
    bool first = true;
    for (const auto& elem : data) {
        if (!first) {
            std::cout << delimiter;
        } else {
            first = false;
        }
        std::cout << elem;
    }
}

int main() {
    std::vector<int> data = {1, 2, 3};
    Print(data, ", ");
}
