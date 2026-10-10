#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  // string s = "Htllo world!! How are you??"
  char s[100];
  //   cin >> s;
  gets(s); // ввід C-style масиву з пробілом
  puts(s); // вивід C-style масиву

  for (int i = 0; i < strlen(s); i++) {
    cout << s[i] << " ";
  }

  return 0;
}