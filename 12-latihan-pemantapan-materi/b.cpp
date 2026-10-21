#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, K, x;
  cin >> A >> B >> K >> x;
  while (K--) {
    x = abs(A * x + B);
  }
  cout << x;
}
