/*Напишіть програму яка переводить відстань вказану в кілометрах і метрах, в
 * милі і фунти*/
#include <iostream>
using namespace std;
int main() {
  double km, m, mile, ft;
  cout << "Введіть відстань у кілометрах і метрах: ";
  cin >> km >> m;
  mile = km * 0.621;
  ft = m * 3.281;
  cout << "Відстань дорівнює: " << mile << " миль, і " << ft << " футів "
       << endl;

  return 0;
}