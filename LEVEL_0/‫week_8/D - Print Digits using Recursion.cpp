#include <iostream>
#include <string>

using namespace std;

void print_digits(string s) {
    if (s.empty()) {
        return;
    }
    cout << s[0] << " ";
    print_digits(s.substr(1));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s = to_string(n);
        print_digits(s);
        cout << endl;
    }
    return 0;
}