#include<bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    int index; // index is result
    nums.push_back(target);
    sort(nums.begin(), nums.end());
    auto it = find(nums.begin(), nums.end(), target);
    if (it != nums.end()) index = distance(nums.begin(), it);
    return index;
}

int main()
{
    vector<int> nums = {1, 3, 7, 6};
    int target = 35;
    cout << searchInsert(nums, target);
    return 0;
}
