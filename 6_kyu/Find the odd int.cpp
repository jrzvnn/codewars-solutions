#include <vector>

int findOdd(const std::vector<int>& arr){
    int ans = 0;
    for (int num : arr) ans ^= num; // XOR the current no. with the ans
    return ans;
}
