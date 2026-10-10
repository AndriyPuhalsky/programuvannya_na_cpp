#include <iostream>
#include <string>
using namespace std;

int main() {
  string n, m, c;
  int i;
  int length;
  cout << "Дано трьохзначне число. \nВ ньому закреслили останню цифру "
          "тапереписали її перед першою. \nВивести на екран отримане число. ";
  cin >> n;
  for (i = 0; i < n.length(); i++) {
    m = n[i];
  }
  c = m + n[0] + n[1];
  cout << c << '\n';
  return 0;
}