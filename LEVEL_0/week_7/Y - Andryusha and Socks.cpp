#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> count;
    int on_table = 0;
    int max_on_table = 0;
    for (int i = 0; i < 2*n; i++) {
        int x;
        cin >> x;
        if (count[x] == 1) {
            count[x] = 0;
            on_table--;
        } else {
            count[x] = 1;
            on_table++;
            max_on_table = max(max_on_table, on_table);
        }
    }
    cout << max_on_table << endl;
    return 0;
}