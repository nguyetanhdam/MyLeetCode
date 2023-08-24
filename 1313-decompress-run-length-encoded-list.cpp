class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i += 2)
        {
            vector<int> tmp;
            for (int j = 0; j < nums[i]; j++) tmp.push_back(nums[i + 1]);
            res.insert(res.end(), tmp.begin(), tmp.end());
            tmp.clear();
        }
        return res;
    }
};
