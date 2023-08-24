class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string res = "";
        int cnt = 0;
        string word;
        while (ss >> word)
        {
            if (cnt == k) break;
            cnt++;
            res += word + " ";
        }
        res.pop_back();
        return res;
    }
};
