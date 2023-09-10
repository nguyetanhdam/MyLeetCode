class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freqMap;

        for (const string& s : arr) {
            freqMap[s]++;
        }

        int count = 0;
        for (const string& s : arr) {
            if (freqMap[s] == 1) {
                count++;
                if (count == k) {
                    return s;
                }
            }
        }

        return "";
    }
};
