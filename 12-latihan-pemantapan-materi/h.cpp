#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q, N;
  cin >> Q;
  while (Q--) {
    cin >> N;
    bool p = N > 1;
    for (int i = 2; i <= sqrt(N); i++) {
      if (N % i == 0) {
        p = false;
        break;
      }
    }
    cout << (p ? "YA" : "BUKAN") << endl;
  }
}
