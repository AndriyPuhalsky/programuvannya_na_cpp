#include <cmath>
#include <iostream>
using namespace std;

float Leng(float xA, float yA, float xB, float yB) {

  return sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
}

int main() {
  float xA, yA, xB, yB, xC, yC, xD, yD;
  cout << "Point A:" << endl;
  cin >> xA >> yA;
  cout << "Point B:" << endl;
  cin >> xB >> yB;
  cout << "Point C:" << endl;
  cin >> xC >> yC;
  cout << "Point D:" << endl;
  cin >> xD >> yD;
  cout << "Leng AB " << Leng(xA, yA, xB, yB) << endl;
  cout << "Leng BC " << Leng(xB, yB, xC, yC) << endl;
  cout << "Leng CD " << Leng(xC, yC, xD, yD) << endl;
  return 0;
}