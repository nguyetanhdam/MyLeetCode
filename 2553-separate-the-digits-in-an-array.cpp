class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for (int x : nums)
        {
            vector<int> tmp;
            while(x > 0)
            {
                tmp.push_back(x % 10);
                x /= 10;
            }
            reverse(tmp.begin(), tmp.end());
            res.insert(res.end(), tmp.begin(), tmp.end());
            tmp.clear();
        }
        return res;
    }
};
