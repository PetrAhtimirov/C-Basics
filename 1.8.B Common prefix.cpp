#include <vector>
#include <iostream>
#include <string>

std::string CommonPrefix(const std::vector<std::string>& words) {
    if (words.empty()) {
        return {};
    }
    std::string cur = words[0];
    int minim = 1e9;
    for (size_t i = 0; i < words.size(); i++) {
        if (int(words[i].size()) < minim) {
            cur = words[i];
            minim = int(cur.size());
        }
    }

    std::string word = "";
    for (size_t i = 0; i < cur.size(); i++) {
       word += cur[i];
       bool flag = true;
       for (size_t j = 0; j < words.size(); j++) {
            if (words[j].find(word) == std::string::npos) {
                flag = false;
                word = word.erase(i, 1);
                return word;
            }
       }
    }
    return word;
}

int main () {
    std::vector<std::string> words = {"apple", "apricot", "application"};
    std::cout << CommonPrefix(words);
}