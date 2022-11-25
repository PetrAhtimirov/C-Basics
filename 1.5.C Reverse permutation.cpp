#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    int n;
    std::vector<std::vector<int>> matrix;

    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        int current;
        std::cin >> current;
        matrix.push_back({current, i});
    }

    std::sort(matrix.begin(), matrix.end());

    for (int i = 0; i < n; i++) {
        std::cout << matrix[i][1] << " ";
    }
}