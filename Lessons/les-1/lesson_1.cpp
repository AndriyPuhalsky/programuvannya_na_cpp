#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float x, y;
  cout << "Enter the coordinates of a point x: ";
  cin >> x;
  if (x > 0) {
    y = 16;
  } else {
    y = pow(x, 2);
  }
  cout << "The coordinates of the point are: (" << x << ", " << y << ")";
  return 0;
}
