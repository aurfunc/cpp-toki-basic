#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, X = -1e5, Y = 1e5;
  cin >> N;
  while (N--) {
    cin >> A;
    X = max(X, A);
    Y = min(Y, A);
  }
  cout << X << " " << Y;
}
