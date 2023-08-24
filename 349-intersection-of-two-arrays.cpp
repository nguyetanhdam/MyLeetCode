class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums1Set(nums1.begin(), nums1.end());
        vector<int> result;

        for (int num : nums2) {
            if (nums1Set.count(num)) {
                result.push_back(num);
                nums1Set.erase(num);
            }
        }

        return result;
    }
};
