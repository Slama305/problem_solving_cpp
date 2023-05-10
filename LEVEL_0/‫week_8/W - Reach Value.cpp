#include <iostream>

using namespace std;

bool can_reach_value(long long curr_value, long long target_value) {
    if (curr_value == target_value) {
        return true;
    }
    if (curr_value > target_value) {
        return false;
    }
    return can_reach_value(curr_value*10, target_value) ||
           can_reach_value(curr_value*20, target_value);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (can_reach_value(1, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}