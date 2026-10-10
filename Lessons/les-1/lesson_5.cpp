#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: " << '\n';
  cin >> n;

  int s = 0;
  for (int i = 1; i <= n; i++) {
    s += i;
  }
  cout << "Sum of first " << n << " numbers: " << s << '\n';

  return 0;
}