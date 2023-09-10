/*
#include <bits/stdc++.h>

using namespace std;

vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    vector<int> res;
    sort(nums.begin(), nums.end());

    // Calculate prefix sum of nums
    vector<int> prefixSum(nums.size() + 1);
    for (int i = 0; i < nums.size(); i++) {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
    }

    for (int x : queries) {
        int pos = upper_bound(prefixSum.begin(), prefixSum.end(), x) - prefixSum.begin() - 1;
        res.push_back(pos);
    }
    return res;
}

int main() {
    vector<int> nums = {4, 5, 2, 1};
    vector<int> queries = {3, 10, 21};
    vector<int> res = answerQueries(nums, queries);
    for (int x : res) {
        cout << x << " ";
    }
    return 0;
}
*/

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> res;
        sort(nums.begin(), nums.end());

        // Calculate prefix sum of nums
        vector<int> prefixSum(nums.size() + 1);
        for (int i = 0; i < nums.size(); i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        for (int x : queries) {
            int pos = upper_bound(prefixSum.begin(), prefixSum.end(), x) - prefixSum.begin() - 1;
            res.push_back(pos);
        }
        return res;
    }
};
