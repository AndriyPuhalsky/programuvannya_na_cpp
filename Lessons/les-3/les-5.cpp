#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  string s = "Htllo world!! How are you??   123   ";
  string s2 = "Htllo world!! How are you??";
  string s3(s + s2);
  cout << s3 << '\n' << s3.size() << '\n' << s3.length() << '\n';

  for (int i = 0; i < s3.size(); i++) {
    if (s3[i] == 'a' || s3[i] == 'o' || s3[i] == 'e' || s3[i] == 'i' ||
        s3[i] == 'u')
      cout << s3[i] << ' ';
  }

  return 0;
}