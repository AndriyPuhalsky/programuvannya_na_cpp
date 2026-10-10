#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter number from 1 to 5: ";
  cin >> number;
  switch (number) {
  case 1:
    cout << "Monday" << '\n';
    break;
  case 2:
    cout << "Tuesday" << '\n';
    break;
  case 3:
    cout << "Wednesday" << '\n';
    break;
  case 4:
    cout << "Thursday" << '\n';
    break;
  case 5:
    cout << "Friday" << '\n';
    break;
  default:
    cout << "Invalid number" << '\n';
    break;
  }
  return 0;
}