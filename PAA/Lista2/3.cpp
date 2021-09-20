#include <iostream>

using namespace std;

unsigned long int mat[10000][10000] = {};

unsigned long long int f(int m, int n) {
  if (m == 0) {
    return n + 1;
  }
  if (m == 1) {
    return n + 2;
  }
  if (m == 2) {
    return (2 * n) + 3;
  }
  if (n == 0) {
    return f(m - 1, 1);
  }
  return f(m - 1, f(m, n - 1));
}

int main() {
  //for (int m = 0; m < 5;m++){
    //for (int n = 0; n < 4;n++){
      // cout << "valor de m: " << m << "valor de n: " << n << endl;
  cout << f(3, 13) << " ";
  //}
  //cout << endl;
//}

  return 0;
}