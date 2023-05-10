#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome(const vector<int>& A, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (A[left] != A[right]) {
        return false;
    }
    return is_palindrome(A, left+1, right-1);
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    if (is_palindrome(A, 0, n-1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}