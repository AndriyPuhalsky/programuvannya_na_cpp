/*Написати програму з функціями переведеня швидкості вказано у км/год в м/c і
 * навпаки */
#include <iostream>
using namespace std;

double kmh_to_ms(double km) {
  double m, hour, sec;
  m = km * 1000;
  hour = 1;
  sec = hour * 3600;
  return m / sec;
}

double ms_to_kmh(double m) {
  double hour;
  hour = 3600;
  return (m * hour) / 1000;
}

int main() {
  double km, ms;
  cout << "Введіть швидкість у км/год: ";
  cin >> km;
  cout << "Швидкість у м/с: " << kmh_to_ms(km) << endl;
  cout << "Введіть швидкість у м/с: ";
  cin >> ms;
  cout << "Швидкість у км/год: " << ms_to_kmh(ms) << endl;

  return 0;
}