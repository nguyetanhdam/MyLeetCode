class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res;
        int minn = 0, maxx = s.length();
        for (char c : s)
        {
            if (c == 'I')
            {
                res.push_back(minn);
                minn++;
            }
            else if (c == 'D')
            {
                res.push_back(maxx);
                maxx--;
            }
        }
        res.push_back(minn); // or res.push_back(maxx);
        return res;
    }
};
