class Solution {
public:
    int addDigits(int num) {
        int res = 0;
        while (num > 0) {
            res += num % 10;
            num /= 10;
        }
        while (res >= 10) {
            res = addDigits(res);
        }
        return res;
    }
};
