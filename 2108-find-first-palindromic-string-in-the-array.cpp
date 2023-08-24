class Solution {
public:
    bool check(string s)
    {
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - i - 1]) return false;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        string res = "";
        for (string s : words)
        {
            if (check(s))
            {
                res = s;
                break;
            }
        }
        return res;
    }
};
