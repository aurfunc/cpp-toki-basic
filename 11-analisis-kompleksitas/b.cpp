#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  long long t = 0;
  for (int& A : d) {
    cin >> A;
    t += A;
  }
  for (int A : d) {
    cout << t - A << endl;
  }
}
