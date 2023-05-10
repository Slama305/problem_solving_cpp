#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = max(a + b + c, max(a * b * c, max(a * (b + c), max((a + b) * c, (a * b) + c))));
    cout << ans << endl;
    return 0;
}