#include <iostream>
#include <deque>
#include <string>

int main() {
    int n, m;
    std::deque<std::string> namesList;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string name;
        std::string position;
        std::cin >> name >> position;
        if (position == "top") {
           namesList.push_front(name);
        } else if (position == "bottom") {
            namesList.push_back(name);
        }
    }

    std::cin >> m;
    for (int i = 0; i < m; i++) {
        int currentItem;
        std::cin >> currentItem;
        std::cout << namesList[currentItem - 1] << '\n';
    }
}