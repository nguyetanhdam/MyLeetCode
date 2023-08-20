#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }

    string commonPrefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        while (j < commonPrefix.size() && j < strs[i].size() && commonPrefix[j] == strs[i][j]) {
            j++;
        }

        commonPrefix = commonPrefix.substr(0, j);

        if (commonPrefix.empty()) {
            return "";
        }
    }

    return commonPrefix;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = longestCommonPrefix(strs);
    cout << "Longest common prefix: " << result << endl;

    return 0;
}
