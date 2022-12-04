#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> Split(const std::string& str, char delimiter) {
    std::string currentw = "";
    std::vector<std::string> ans;
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == delimiter) {
            ans.push_back(currentw);
            currentw = "";
        } else {
            currentw += str[i];
        }
    }
    ans.push_back(currentw);
    return ans;
}

int main () {
    std::vector<std::string> ans = Split("What_is_your_name?", '_');
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << '\n';
    }
}