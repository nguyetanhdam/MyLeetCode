#include <iostream>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int maxLength = 0;
    int left = 0;
    int right = 0;
    unordered_set<char> charSet;

    while (right < s.length()) {
        if (charSet.count(s[right]) == 0) {
            charSet.insert(s[right]);
            right++;
            maxLength = max(maxLength, right - left);
        } else {
            charSet.erase(s[left]);
            left++;
        }
    }

    return maxLength;
}

int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
    return 0;
}
