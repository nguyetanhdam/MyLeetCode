class Solution {
public:
    int titleToNumber(std::string columnTitle) {
        int result = 0;
        for (char c : columnTitle) {
            int digitValue = c - 'A' + 1; // Convert character to integer value (A=1, B=2, ..., Z=26)
            result = result * 26 + digitValue;
        }
        return result;
    }
};
