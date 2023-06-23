#include <vector>

using namespace std;

vector<int> move_zeroes(const vector<int> input) {
  vector<int> v(input.size(), 0);
  int z = 0;
  for (auto c : input) {
    if (c != 0) {
      v[z++] = c;
    }
  }
  return v;
}
