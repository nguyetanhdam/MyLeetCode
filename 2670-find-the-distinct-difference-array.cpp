class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> diff(n);

        for (int i = 0; i < n; i++) {
            diff[i] = countDistinct(nums, 0, i) - countDistinct(nums, i + 1, n - 1);
        }

        return diff;
    }

    int countDistinct(vector<int>& nums, int start, int end) {
        unordered_set<int> distinctSet;
        for (int i = start; i <= end; i++) {
            distinctSet.insert(nums[i]);
        }
        return distinctSet.size();
    }
};
