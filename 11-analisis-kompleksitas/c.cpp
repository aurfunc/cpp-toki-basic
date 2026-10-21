#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (int r = sqrt(N); r >= 1; r--) {
    if (N % r == 0) {
      cout << r << " " << N / r << endl;
      break;
    }
  }
}
