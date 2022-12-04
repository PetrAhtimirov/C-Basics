#include <iostream>
#include <vector>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix) {
    size_t m = matrix.size();
    size_t n = matrix[0].size();
    std::vector<std::vector<int>> ans(n, std::vector<int>(m));

    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            ans[j][i] = matrix[i][j];
        }
    }
    return ans;
}

int main () {
    
}