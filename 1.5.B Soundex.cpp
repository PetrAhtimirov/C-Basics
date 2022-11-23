#include <iostream>
#include <cctype>
#include <vector>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::vector<char> datadel = {'a', 'e', 'h', 'i', 'o', 'u', 'w', 'y'};
    std::vector<char> data1 = {'b', 'f', 'p', 'v'};
    std::vector<char> data2 = {'c', 'g', 'j', 'k', 'q', 's', 'x', 'z'};
    std::vector<char> data3 = {'d', 't'};
    std::vector<char> data5 = {'m', 'n'};


    std::string st = s.substr(0, 1);
    s.erase(0, 1);

    for (int i = 0; i != int(s.size()); i++) {
        for (char k : datadel) {
            if (s[i] == k) {
                s.erase(i, 1);
                i = 0;
            }
        }
        for (char k : data1) {
            if (s[i] == k) {
                s.replace(i, 1, "1");
                i = 0;
            }
        }
        for (char k : data2) {
            if (s[i] == k) {
                s.replace(i, 1, "2");
                i = 0;
            }
        }
        for (char k : data3) {
            if (s[i] == k) {
                s.replace(i, 1, "3");
                i = 0;
            }
        }
        if (s[i] == 'l') {
            s.replace(i, 1, "4");
            i = 0;
        }
        for (char k : data5) {
            if (s[i] == k) {
                s.replace(i, 1, "5");
                i = 0;
            }
        }
        if (s[i] == 'r') {
            s.replace(i, 1, "6");
            i = 0;
        }
    }

    for (int i = 1; i != int(s.size()); i++) {
        if (s[i] == s[i-1]) {
            s.erase(i, 1);
            i = 0;
        }
    }

    s = st + s;

    if (int(s.size()) < 4) {
        while(int(s.size()) != 4) {
            s += "0";
        }
    } else {
        s = s.substr(0, 4);
    }

    std::cout << s;

    return 0;
}
