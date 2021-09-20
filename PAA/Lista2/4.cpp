#include <iostream>

using namespace std;

void f(int m, int v[], int n) {
  int x;
  for (int i = n - 1; i >= 0 && m > 0; i--) {
    x = m % v[i];
    if (x != m) {
      cout << m / v[i] << " Moedas de " << v[i] << endl;
    }
    m = x;
  }
  if (m > 0) {
    cout << "Impossível" << endl;
  }
}

int main() {
  int vet[] = { 1, 2, 5,10 };

  f(89, vet, 4);

  return 0;
}