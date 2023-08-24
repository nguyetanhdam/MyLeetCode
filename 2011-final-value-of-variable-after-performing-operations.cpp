class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for (string s : operations)
        {
            if (s == "X++" || s == "++X") res++;
            else if (s == "X--" || s == "--X") res--;
        }
        return res;
    }
};
