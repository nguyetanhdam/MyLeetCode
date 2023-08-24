#include<bits/stdc++.h>

using namespace std;

int elementSum(vector<int>& nums)
{
    int res = 0;
    for (int x : nums) res+= x;
    return res;
}

int digitSum(vector<int>& nums)
{
    int res = 0;
    for (int x : nums)
    {
        int tmp_sum = 0;
        while (x > 0)
        {
            tmp_sum += x % 10;
            x /= 10;
        }
        res += tmp_sum;
    }
    return res;
}

int differenceOfSum(vector<int>& nums)
{
    return abs(elementSum(nums) - digitSum(nums));
}

int main()
{
    vector<int> nums = {1,15,6,3};
    cout << elementSum(nums) << ' ' << digitSum(nums) << ' ' << differenceOfSum(nums);
    return 0;
}
