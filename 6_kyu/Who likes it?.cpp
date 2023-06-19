#include <string>
#include <vector>

using namespace std;

string likes(const vector<string> &names) {
  string ans;
  if (names.empty()) return "no one likes this";
  if (names.size() == 1) ans = names[0] + " likes this"; 
  else if (names.size() == 2) ans = names[0] + " and " + names[1] + " likes this"; 
  else if (names.size() == 3) ans = names[0] + ", " + names[1] + " and " + names[2] + " likes this";
  else ans = names[0] + ", " + names[1] + " and " + to_string(names.size() - 2) + " others like this";
  return ans;
}
