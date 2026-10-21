#include <iostream>
using namespace std;

int hitung_vokal(string s) {
  if (s.empty()) {
    return 0;
  }
  return (string("aeiou").find(s[0]) != string::npos) +
         hitung_vokal(s.substr(1));
}

int main() {
  cout << hitung_vokal(
              "lorem ipsum dolor sit amet fermentum egestas luctus praesent "
              "torquent justo.")
       << endl;
}
