#include <iostream>
using namespace std;

int main() {
  string s =
      "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus "
      "tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis "
      "ullamcorper hac odio imperdiet.";
  int total_vokal = 0;
  for (char c : s) {
    total_vokal += string("aeiou").find(c) != string::npos;
  }
  cout << total_vokal << endl;
}
