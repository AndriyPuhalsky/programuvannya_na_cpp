#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float x, y;
  cout << "Enter x: ";
  cin >> x;

  if (x > 5) {
    y = x + 1;
  } else {
    if ((-4 <= x) && (x <= 5)) {
      y = x * x + 6;
    } else {
      y = pow(x, 3) + sin(x);
    }
  }

  cout << "y= " << y << '\n';
  return 0;
}