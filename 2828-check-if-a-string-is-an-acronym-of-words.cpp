class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string tmp = "";
        for(string s : words)
        {
            tmp += s[0];
        }
        return tmp == s;
    }
};
