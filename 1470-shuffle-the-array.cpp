class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int i = 0;
        for (int j = n; j > 0; j--)
        {
            res.push_back(nums[i]);
            res.push_back(nums[i + n]);
            i++;
        }
        return res;
    }
};
