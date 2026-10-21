#include <iostream>
using namespace std;

int main() {
  bool ada_yang_dijual = false;
  for (int sisi = 121; sisi <= 125; sisi++) {
    bool kelipatan2 = sisi % 2 == 0;
    bool kelipatan3 = sisi % 3 == 0;
    if (kelipatan2 && !kelipatan3) {
      ada_yang_dijual = true;
    }
  }
  cout << (ada_yang_dijual ? "ada" : "tidak ada") << endl;
}
