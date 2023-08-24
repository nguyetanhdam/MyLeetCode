class Solution {
public:
    string concatt(vector<string>& word) {
        string res = "";
        for (string s : word) res += s;
        return res;
    }

    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return (concatt(word1) == concatt(word2));
    }
};
