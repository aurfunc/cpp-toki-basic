#include <iostream>
using namespace std;

int jantan[4] = {0, 10, 50, 60}, betina[4] = {7, 80, 9, 40};

int biaya(int total_bebek) {
  if (total_bebek < 10) {
    return 100000 * total_bebek;
  } else if (total_bebek <= 50) {
    return 75000 * total_bebek;
  } else {
    return 50000 * total_bebek;
  }
}

int biaya_jantan_dan_betina(int hari) {
  return biaya(jantan[hari]) + biaya(betina[hari]);
}

int main() {
  for (int i = 0; i < 4; i++) {
    cout << biaya_jantan_dan_betina(i) << endl;
  }
}
