/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.

*/

class Solution {
public:
    int lengthOfLastWord(const string& s) {
        size_t start = s.find_first_not_of(' ');
        size_t end = s.find_last_not_of(' ');
        string trimmedString = s.substr(start, end - start + 1);

        size_t lastSpace = trimmedString.rfind(' ');

        if (lastSpace == string::npos) {
            return trimmedString.length();
        } else {
            return trimmedString.length() - lastSpace - 1;
        }
    }
};
