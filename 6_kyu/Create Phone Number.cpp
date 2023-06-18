#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string createPhoneNumber(const int arr[10]) {
  ostringstream oss;
  oss << "(";
  for (int i = 0; i < 3; i++) {
    oss << arr[i];
  }
  oss << ") ";
  for (int i = 3; i < 6; i++) {
    oss << arr[i];
  }
  oss << "-";
  for (int i = 6; i < 10; i++) {
    oss << arr[i];
  }
  return oss.str();
}


