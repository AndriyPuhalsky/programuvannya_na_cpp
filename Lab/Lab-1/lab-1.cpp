#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float x, y;
  cout << "Enter x: ";
  cin >> x;
  y = pow(x, 3) - 4 * pow(x, 2) - 5 * x + 9 + cos(x);
  cout << "y= " << y << '\n';
  return 0;
}
