#include <iostream>
#include <deque>
#include <string>

void MakeTrain() {
    std::deque<int> train;
    std::string side;
    size_t k;
    while (std::cin >> side) {
        int counter;
        if (side == "+left") {
            std::cin >> counter;
            train.push_front(counter);
        } else if (side == "+right") {
            std::cin >> counter;
            train.push_back(counter);
        } else if (side == "-left") {
            std::cin >> k;
            k = std::min(k, train.size());
            train.erase(train.begin(), train.begin() + k);
        } else if (side == "-right") {
            std::cin >> k;
            k = std::min(k, train.size());
            train.erase(train.end() - k, train.end());
        }
    }
    
    for (const auto& wagon : train) {
        std::cout << wagon << " ";
    }
}

int main() {
    MakeTrain();
}