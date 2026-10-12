/*Обчислити біноміальні коефіцієнти*/
#include <iostream>
using namespace std;

long long combination(int n, int k) {
  if (k < 0 || k > n)
    return 0;
  if (k == 0 || k == n)
    return 1;
  if (k > n - k)
    k = n - k;
  long long result = 1;
  for (int i = 1; i <= k; i++) {
    result = result * (n - k + i) / i;
  }
  return result;
}

int main() {
  int n, k;
  cout << "Введіть n та k: ";
  cin >> n >> k;
  cout << "C(" << n << ", " << k << ") = " << combination(n, k) << endl;
  return 0;
}