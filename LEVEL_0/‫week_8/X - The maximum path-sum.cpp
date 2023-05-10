#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    vector<vector<int>> dp(n, vector<int>(m));
    dp[0][0] = A[0][0];
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i-1][0] + A[i][0];
    }
    for (int j = 1; j < m; j++) {
        dp[0][j] = dp[0][j-1] + A[0][j];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            dp[i][j] = A[i][j] + max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[n-1][m-1] << endl;
    return 0;
}