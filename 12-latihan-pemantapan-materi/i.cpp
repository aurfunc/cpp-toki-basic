#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for (int k = 0; k < 26; k++) {
    for (char c : S) {
      cout << char('a' + (c - 'a' + k) % 26);
    }
    cout << endl;
  }
}
