#include <cctype>
#include <iostream>
using namespace std;

int main() {
  char s[10] = "HelLo123 ";
  for (int i = 0; i < 10; i++) {
    if (isalpha(s[i])) {
      cout << "Letter " << endl;
    } else if (isdigit(s[i])) {
      cout << "Digit " << endl;
    } else {
      cout << "Other " << endl;
    }
  }

  return 0;
}