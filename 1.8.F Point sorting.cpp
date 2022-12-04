#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

int main () {
    int n;
    std::vector<std::vector<double>> ans;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        double x, y;
        double kv;
        std::cin >> x >> y;
        kv = sqrt(x*x + y*y);
        ans.push_back({kv, x, y});
    }
    std::sort(ans.begin(), ans.end());

    for (int i = 0; i < n; i++) {
        std::cout << ans[i][1] << " " << ans[i][2] << '\n';
    }
}