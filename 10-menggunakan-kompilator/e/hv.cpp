/*
  - hv.exe < i.txt
  - ./hv < i.txt

  - hv.exe < i.txt > o.txt
  - ./hv < i.txt > o.txt
*/

#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int total_vokal = 0;
  for (char c : s) {
    total_vokal += string("aeiou").find(c) != string::npos;
  }
  cout << total_vokal << endl;
}
