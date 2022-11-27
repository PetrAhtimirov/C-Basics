#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

int main () {
    int m, n, k;
    std::cin >> m >> n >> k;

    std::vector<std::vector<std::string>> matrix(m, std::vector<std::string>(n));

    for (int i = 0; i < k; ++i) {
        int x, y;
        std::cin >> x >> y;
        matrix[x-1][y-1] = "*";
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] != "*") {
                int ans = 0;

                if ((i >= 1) && (j >= 1)) {
                    if (matrix[i-1][j-1] == "*") {
                    ans += 1;
                    }
                }

                if (j >= 1) {
                    if (matrix[i][j-1] == "*") {
                        ans += 1;
                    }
                }
                
                if ((i < (m-1)) && (j >= 1)) {
                    if (matrix[i+1][j-1] == "*") {
                        ans += 1;
                    }
                }
                
                if(i >= 1) {
                    if (matrix[i-1][j] == "*") {
                        ans += 1;
                    }
                }
               
                if (i < (m-1)) {
                    if (matrix[i+1][j] == "*") {
                        ans += 1;
                    }
                }

                if ((j < (n-1)) && (i >= 1)) {
                    if (matrix[i-1][j+1] == "*") {
                        ans += 1;
                    }
                }
                
                if (j < (n-1)) {
                    if (matrix[i][j+1] == "*") {
                        ans += 1;
                    }
                }
                
                if ((j < (n-1)) && (i < (m-1))) {
                    if (matrix[i+1][j+1] == "*") {
                        ans += 1;
                    }
                }
                matrix[i][j] = std::to_string(ans);
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == (n-1)) {
                std::cout << matrix[i][j] << '\n';
            } else {
            std::cout << matrix[i][j] << " ";
            }
        }
    }
}