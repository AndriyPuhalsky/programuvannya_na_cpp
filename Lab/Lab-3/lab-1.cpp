#include <iostream> // ввід курсу долара
using namespace std;

int main() {
  double course;
  double sum;
  int money = 10, ryadok, stovpec;
  cout << "Введіть курс $ в гриивні: ";
  cin >> course;

  for (ryadok = 1; ryadok <= money; ryadok++) {
    cout << ryadok << "$ = ";
    for (stovpec = 1; stovpec < 2; stovpec++) {
      sum = ryadok * course;
      cout << sum << "грн\t";
    }
    cout << endl;
  }

  return 0;
}
