#include <iostream>

using namespace std;

const int MAXN = 30;

int ncr[MAXN+1][MAXN+1];

int main() {
    int n, r;
    cin >> n >> r;
    for (int i = 0; i <= n; i++) {
        ncr[i][0] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= r; j++) {
            ncr[i][j] = ncr[i-1][j-1] + ncr[i-1][j];
        }
    }
    cout << ncr[n][r] << endl;
    return 0;
}