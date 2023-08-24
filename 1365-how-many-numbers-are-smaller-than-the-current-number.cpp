class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int tmp = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j && nums[i] > nums[j]) tmp++;
            }
            res.push_back(tmp);
        }
        return res;
    }
};
