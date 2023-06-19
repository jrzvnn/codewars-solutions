#include <iostream>
#include <string>

using namespace std;

string get_middle(string input) {
  int len = input.length();
  int mid = len / 2;
  return ((len % 2 != 0) ? string(1, input[mid]) : input.substr(mid - 1, 2));
}
