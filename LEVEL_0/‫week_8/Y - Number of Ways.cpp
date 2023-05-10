#include <iostream>

using namespace std;

int count_ways(int curr_pos, int end_pos) {
    if (curr_pos >= end_pos) {
        return (curr_pos == end_pos) ? 1 : 0;
    }
    return count_ways(curr_pos+1, end_pos) +
           count_ways(curr_pos+2, end_pos) +
           count_ways(curr_pos+3, end_pos);
}

int main() {
    int s, e;
    cin >> s >> e;
    cout << count_ways(s, e) << endl;
    return 0;
}