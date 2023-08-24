#include <bits/stdc++.h>

using namespace std;

vector<int> leftSumm(vector<int>& nums) {
    vector<int> leftSum;
    for (int i = 0; i < nums.size(); i++)
    {
        int tmp = 0;
        for (int j = 0; j < i; j++)
        {
            tmp += nums[j];
        }
        leftSum.push_back(tmp);
    }
    return leftSum;
}

vector<int> rightSumm(vector<int>& nums) {
    vector<int> rightSum;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        int tmp = 0;
        for (int j = nums.size() - 1; j > i; j--)
        {
            tmp += nums[j];
        }
        rightSum.push_back(tmp);
    }
    reverse(rightSum.begin(), rightSum.end());
    return rightSum;
}

vector<int> leftRightDifference(vector<int>& nums) {
    vector<int> leftSum = leftSumm(nums);
    vector<int> rightSum = rightSumm(nums);

    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        res.push_back(abs(leftSum[i] - rightSum[i]));
    }
    return res;
}

int main()
{
    vector<int> nums = {10,4,8,3};
    vector<int> leftSum = leftSumm(nums);

    for (int x : leftSum) cout << x << ' ';
    cout << endl;

    vector<int> rightSum = rightSumm(nums);
    for (int x : rightSum) cout << x << ' ';
    cout << endl;
    return 0;
}
