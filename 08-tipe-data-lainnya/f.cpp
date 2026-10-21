#include <iostream>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
  long long r = (op == '+') ? 0 : 1;
  for (string n : data) {
    if (op == '+') {
      r += stoi(n);
    } else if (op == '*') {
      r *= stoi(n);
    } else {
      return "KESALAHAN";
    }
  }
  return to_string(r);
}

int main() {
  cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"})
       << endl;
  cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
  cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
  cout << kalkulator('*', {"17", "8", "1945"}) << endl;
  cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
