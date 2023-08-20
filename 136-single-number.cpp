/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
            {
                res = nums[i];
                break;
            }
        }
        return res;
    }
};
