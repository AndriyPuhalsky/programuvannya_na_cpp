#include <cctype>
#include <iostream>
using namespace std;

int main() {
  char s[10] = "HelLo123 ";
  for (int i = 0; i < 10; i++) {
    if (isupper(s[i])) {
      s[i] = tolower(s[i]);
    } else if (islower(s[i])) {
      s[i] = toupper(s[i]);
    }
  }
  cout << s;

  return 0;
}