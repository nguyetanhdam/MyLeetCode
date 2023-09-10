#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> substitution;
        int index = 0;

        for (char c : key) {
            if (c != ' ' && substitution.find(c) == substitution.end()) {
                substitution[c] = char('a' + index);
                index++;
            }
        }
        string decodedMessage = "";
        for (char c : message) {
            if (c == ' ') {
                decodedMessage += ' ';
            } else {
                decodedMessage += substitution[c];
            }
        }
        return decodedMessage;
    }
};

int main() {
    Solution solution;
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    string decoded = solution.decodeMessage(key, message);
    cout << "Decoded message: " << decoded << endl;
    return 0;
}
