#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];
        if (mp.find(diff) != mp.end()) {
            return {mp[diff], i};
        }
        mp[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums;
    int target;

    cout << "Enter the elements of the array separated by spaces (e.g., 1 2 3 4): ";
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to target: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers found that add up to target." << endl;
    }

    return 0;
}
