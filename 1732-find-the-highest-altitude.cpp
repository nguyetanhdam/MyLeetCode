class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> v;
        for (int i = 0; i <= n; i++)
        {
            int summ = 0;
            for (int j = 0; j < i; j++) summ += gain[j];
            v.push_back(summ);
        }
        return *max_element(v.begin(), v.end());
    }
};
