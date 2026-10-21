#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, P, A[100][100], B[100][100];
  cin >> N >> M >> P;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < P; j++) {
      cin >> B[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < P; j++) {
      int C = 0;
      for (int k = 0; k < M; k++) {
        C += A[i][k] * B[k][j];
      }
      cout << C << " ";
    }
    cout << endl;
  }
}
