#include <iostream>
#include <vector>
using namespace std;

int N, W;
vector<int> w, v;

int knapsack(int i, int w) {
    if (i > N) {
        return 0;
    }
    int with_i = 0, without_i = 0;
    if (w >= ::w[i]) {
        with_i = v[i] + knapsack(i+1, w-::w[i]);
    }
    without_i = knapsack(i+1, w);
    return max(with_i, without_i);
}

int main() {
    cin >> N >> W;
    w.resize(N+1);
    v.resize(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }
    cout << knapsack(1, W) << endl;
    return 0;
}