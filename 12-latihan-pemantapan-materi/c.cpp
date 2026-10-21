#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, r = 0;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j < i; j++) {
      cout << r;
      r = (r + 1) % 10;
    }
    cout << endl;
  }
}
