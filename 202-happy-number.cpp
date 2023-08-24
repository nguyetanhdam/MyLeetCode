#include <bits/stdc++.h>

using namespace std;

int square(int n)
{
    vector<int> nums;
    while (n > 0)
    {
        nums.push_back(n % 10);
        n /= 10;
    }
    int res = 0;
    for (int digit : nums)
    {
        res += digit * digit;
    }
    return res;
}

bool isHappy(int n)
{
    if (n == 1 || n == 7 || n == 10) return 1;
    if (n > 1 && n < 10) return 0;
    while (n > 10)
    {
        n = square(n);
    }
    return n == 1 || n == 7 || n == 10;
}

int main()
{
    int n;
    cin >> n;
    if (isHappy(n)) cout << "True";
    else cout << "False";
    return 0;
}
