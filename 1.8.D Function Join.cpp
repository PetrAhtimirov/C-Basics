#include <iostream>
#include <vector>
#include <string>

std::string Join(const std::vector<std::string>& tokens, char delimiter) {
    std::string ans = "";
    for (size_t i = 0; i < tokens.size(); i++) {
        ans += tokens[i];
        if (i != (tokens.size()-1)) {
            ans += delimiter;
        }
    }
    
    return ans;
}

int main () {
    std::string ans = Join({"What", "is", "your", "name?"}, '_');
    std::cout << ans;
}