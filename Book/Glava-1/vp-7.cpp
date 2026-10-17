/*Напишіть програму яка переводить відстань в саженях (2,16м) в метри*/
#include <iostream>
using namespace std;
int main() {
  double saj, m;
  cout << "Введіть відстань в саженях: ";
  cin >> saj;
  m = saj * 2.16;
  cout << "Відстань дорівнює: " << m << " метрів\n";

  return 0;
}