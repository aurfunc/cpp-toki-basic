#include <iostream>
using namespace std;

int main() {
  int luas_kandang = 12;
  int total_luas_kandang = luas_kandang;
  int total_bulan = 1;
  while (total_bulan <= 10) {
    luas_kandang += 7;
    total_luas_kandang += luas_kandang;
    total_bulan++;
  }
  cout << total_luas_kandang << endl;
}
