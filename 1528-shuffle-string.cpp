class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        string shuffled(n, ' '); // Initialize a string of the same length as s

        for (int i = 0; i < n; ++i) {
            shuffled[indices[i]] = s[i]; // Place characters at their shuffled positions
        }

        return shuffled;
    }
};
