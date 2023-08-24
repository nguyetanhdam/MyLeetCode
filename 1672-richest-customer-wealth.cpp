class Solution {
public:
    int summ (vector<int> v) {
        int res = 0;
        for (int x : v)
        {
            res += x;
        }
        return res;
    }

    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx = -1e9;
        for (vector<int> v : accounts)
        {
            maxx = max(maxx, summ(v));
        }
        return maxx;
    }
};
