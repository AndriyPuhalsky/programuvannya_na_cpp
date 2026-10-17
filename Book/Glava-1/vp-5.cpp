/*Напишіть програму яка переводить кілометри в милі, враховуючи, що 1 км = 0,621
 * милі*/
#include <iostream>
using namespace std;
int main() {
  double km, mile;
  cout << "Введіть кількість кілометрів: ";
  cin >> km;
  mile = km * 0.621;
  cout << "В милях: " << mile << endl;

  return 0;
}