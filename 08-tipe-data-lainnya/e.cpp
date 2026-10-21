#include <iostream>
#include <vector>
using namespace std;

vector<int> jumlah_bersebelahan(vector<int> v) {
  for (int i = 0; i < v.size() - 1; i++) {
    v[i] += v[i + 1];
  }
  v.pop_back();
  return v;
}

void cetak_vektor(vector<int> v) {
  cout << "vector:";
  for (int x : v) {
    cout << " " << x;
  }
  cout << endl;
}

int main() {
  cetak_vektor(jumlah_bersebelahan({1, 2, 3, 4, 5}));
  cetak_vektor(jumlah_bersebelahan({17, 8, 1945}));
}
