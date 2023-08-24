class Solution {
public:
    int value (vector<int>& nums, int startIndex, int endIndex) {
        int res = 0;
        for (int i = startIndex; i <= endIndex; i++) res += nums[i];
        return res;
    }

    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            res.push_back(value(nums, 0, i));
        }
        return res;
    }
};
