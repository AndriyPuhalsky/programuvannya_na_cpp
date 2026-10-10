#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: " << '\n';
  cin >> n;

  int i = 1;
  int s = 0;
  while (i <= n) {
    s += i;
    i++;
  }
  cout << "Sum of first " << n << " numbers: " << s << '\n';

  return 0;
}