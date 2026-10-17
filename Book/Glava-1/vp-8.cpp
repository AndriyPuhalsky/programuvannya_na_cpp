/*Напишіть програму яка переводить сажені і аршени у метри і сантиметри, 3
 * аршени = 1 саженю*/
#include <iostream>
using namespace std;
int main() {
  double saj, arsh, m, cm;
  cout << "Введіть відстань у саженях та аршенах: ";
  cin >> saj >> arsh;
  m = saj * 2.16;
  cm = (arsh / 3) * 216;
  cout << "Відстань дорівнює: " << m << " метрів і " << cm << " сантиметрів\n";

  return 0;
}