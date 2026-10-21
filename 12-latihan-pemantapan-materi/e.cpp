#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D, X[1000], Y[1000], mn = 1e9, mx = 0;
  cin >> N >> D;
  for (int i = 0; i < N; i++) {
    cin >> X[i] >> Y[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int T = pow(abs(X[j] - X[i]), D) + pow(abs(Y[j] - Y[i]), D);
      mn = min(mn, T);
      mx = max(mx, T);
    }
  }
  cout << mn << " " << mx;
}
