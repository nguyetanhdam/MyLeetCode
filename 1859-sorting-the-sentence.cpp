/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.
*/

class Solution {
public:
    string sortSentence(string s) {
        map<char, string> m;
        vector<string> arr;
        string delimiter = " ";
        size_t pos = 0;

        while ((pos = s.find(delimiter)) != string::npos) {
            arr.push_back(s.substr(0, pos));
            s.erase(0, pos + delimiter.length());
        }
        arr.push_back(s);

        for (const string& element : arr) {
            m[element[element.length() - 1]] = element.substr(0, element.length() - 1);
        }

        string result = "";
        for (const auto& i : m) {
            result += i.second + " ";
        }
        return result.substr(0, result.size() - 1);
    }
};
