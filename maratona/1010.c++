#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;
  N = ((N + 1) * (N + 2)) / 2;
  cout << N << endl;

  return 0;
}