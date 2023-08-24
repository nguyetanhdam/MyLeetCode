class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.back();
        return n * k + (k * (k - 1)) / 2;
    }
};
