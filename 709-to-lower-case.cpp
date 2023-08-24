class Solution {
public:
    string toLowerCase(string s) {
        string res = "";
        for (char c : s)
        {
            if (c >= 'A' && c <= 'Z') c = c + 'a' - 'A';
            res += c;
        }
        return res;
    }
};
