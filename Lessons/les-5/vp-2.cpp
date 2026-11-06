#include <iostream>
using namespace std;
int main() {
  int a[10], *p, n, max, sum;
  cout << "n= ";
  cin >> n;
  for (int i{0}; i < n; ++i) {
    cin >> a[i];
  }
  p = &a[0];
  max = *p;
  sum = 0;
  for (int i{0}; i < n; ++i) {
    sum += *p;
    if (*p > max)
      max = *p;
    cout << *p << ' ';
    p++;
  }
  cout << endl << "max= " << max << endl;
  cout << "sum= " << sum << endl;
  return 0;
}