class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int balance = 0;
        for (char c : s) {
            if (c == 'L') {
                balance++;
            } else if (c == 'R') {
                balance--;
            }

            if (balance == 0) {
                count++;
            }
        }
        return count;
    }
};
