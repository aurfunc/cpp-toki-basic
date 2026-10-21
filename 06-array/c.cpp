#include <iostream>
using namespace std;

int main() {
  int luas[5] = {225 * 335, 215 * 394, 198 * 400, 314 * 298, 299 * 278};
  int luas_terbesar = luas[0];
  for (int i = 1; i < 5; i++) {
    if (luas[i] > luas_terbesar) {
      luas_terbesar = luas[i];
    }
  }
  cout << luas_terbesar << endl;
}
