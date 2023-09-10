class Solution {
public:
    vector<int> distinct(vector<int>& nums1, vector<int>& nums2)
    {
        set<int> tmp;
        for (int x : nums1)
        {
            if (find(nums2.begin(), nums2.end(), x) == nums2.end())
            {
                tmp.insert(x);
            }
        }
        vector<int> res;
        for (int x : tmp)
        {
            res.push_back(x);
        }
        return res;
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2)
    {
        vector<vector<int>> lastRes;
        lastRes.push_back(distinct(nums1, nums2));
        lastRes.push_back(distinct(nums2, nums1));
        return lastRes;
    }
};
