#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    vector<int> left_max(n);
    left_max[0] = A[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i-1], A[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << left_max[i] << " ";
    }
    cout << endl;
    return 0;
}