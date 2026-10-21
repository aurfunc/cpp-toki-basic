#include <iostream>
using namespace std;

int main() {
  string s = "thequickbrownfoxjumpsoverthelazydog";
  for (char c : s) {
    cout << char('A' + (c - 'a' + 1) % 26);
  }
  cout << endl;
}
