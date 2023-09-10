#include <bits/stdc++.h>

using namespace std;

int findIndex(int num1, vector<int>& nums2)
{
    for (int i = 0; i < nums2.size(); i++)
    {
        if (nums2[i] == num1) return i;
    }
    return -1;
}

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> res;
    for (int x : nums1)
    {
        bool check = true; // add -1 to vector res
        for (int i = findIndex(x, nums2); i < nums2.size(); i++)
        {
            if (nums2[i] > x)
            {
                res.push_back(nums2[i]);
                check = false;
                break;
            }
        }
        if (check) res.push_back(-1);
    }
    return res;
}

int main()
{
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    vector<int> res = nextGreaterElement(nums1, nums2);
    for (int x : res) cout << x << ' ';
    return 0;
}
