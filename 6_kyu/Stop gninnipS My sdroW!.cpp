#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string spinWords(const string &str) {
    stringstream ss(str);
    string word, result;
    while (ss >> word) {
        if(word.length() >= 5) 
            reverse(word.begin(), word.end());
        result += word + " ";
    }
    if (!result.empty()) result.pop_back();
    return result;
}// spinWords


