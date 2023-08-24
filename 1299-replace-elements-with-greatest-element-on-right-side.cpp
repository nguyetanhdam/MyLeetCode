class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        res[n - 1] = -1;

        int maxx = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            res[i] = maxx;
            maxx = max(maxx, arr[i]);
        }

        return res;
    }
};
