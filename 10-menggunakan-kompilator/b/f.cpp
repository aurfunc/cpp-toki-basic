/*
  - g++ -o f.exe f.cpp
  - g++ -o f f.cpp
*/

#include <iostream>
using namespace std;

long long faktorial(int n) {
  if (n == 1) {
    return 1;
  }
  return faktorial(n - 1) * n;
}

int main() {
  int n = 10, m = 20;
  cout << faktorial(n) + faktorial(m) << endl;
}
