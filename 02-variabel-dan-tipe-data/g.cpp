#include <iostream>
using namespace std;

int main() {
  int jantan = 63;
  int betina = 192;
  betina += jantan;
  jantan -= jantan / 3;
  jantan += betina;
  betina -= 10;
  cout << jantan + betina << endl;
}
