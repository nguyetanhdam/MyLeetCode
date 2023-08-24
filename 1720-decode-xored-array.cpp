class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;
        arr.push_back(first);

        for (int num : encoded) {
            arr.push_back(arr.back() ^ num);
        }

        return arr;
    }
};
