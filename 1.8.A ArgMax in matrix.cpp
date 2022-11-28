#include <vector>
#include <iostream>
#include <utility>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
    int maxim = matrix[0][0];
    std::pair<size_t, size_t> ans = {0, 0};
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] > maxim) {
                maxim = matrix[i][j];
                ans = {i, j};
            }
        }
    }
    return ans;
}

int main () {
    int x, y;
    std::cin >> y >> x;
    std::vector<std::vector<int>> matrix(y, std::vector<int>(x));
    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    std::cout << MatrixArgMax(matrix).first << " " << MatrixArgMax(matrix).second;
}