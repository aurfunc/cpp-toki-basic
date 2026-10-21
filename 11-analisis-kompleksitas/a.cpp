#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, t = 0;
  cin >> N;
  vector<int> d(N);
  for (int& A : d) {
    cin >> A;
    t += A;
  }
  for (int A : d) {
    cout << t - A << endl;
  }
}
