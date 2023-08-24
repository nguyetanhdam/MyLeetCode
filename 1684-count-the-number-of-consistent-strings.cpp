class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowedChars(allowed.begin(), allowed.end());
        int count = 0;

        for (const string& word : words) {
            bool consistent = true;
            for (char c : word) {
                if (allowedChars.find(c) == allowedChars.end()) {
                    consistent = false;
                    break;
                }
            }
            if (consistent) {
                count++;
            }
        }

        return count;
    }
};
