// by Slama
#include <bits/stdc++.h>
using namespace std;

bool check_prime(int);

int main() {
int t;cin>>t;
while(t--){
  int n;
  cin >> n;

  if (check_prime(n))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
  return 0;
}

bool check_prime(int n) {
  bool is_prime = true;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}