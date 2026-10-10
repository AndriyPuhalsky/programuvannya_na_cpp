#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter number of day from 1 to 7: ";
  cin >> number;
  switch (number) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    cout << "Work day" << '\n';
    break;
  case 6:
  case 7:
    cout << "Weekend" << '\n';
    break;
  default:
    cout << "Invalid number" << '\n';
    break;
  }
  return 0;
}