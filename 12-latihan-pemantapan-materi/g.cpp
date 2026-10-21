#include <bits/stdc++.h>
using namespace std;

void f(int N) {
  if (N == 1) {
    cout << "*" << endl;
    return;
  }
  f(N - 1);
  cout << string(N, '*') << endl;
  f(N - 1);
}

int main() {
  int N;
  cin >> N;
  f(N);
}
