#include <bits/stdc++.h>

using namespace std;

int climbStairs(int n)
{
    if (n <= 2) {
        return n;
    }

    int prev1 = 1;
    int prev2 = 2;
    int current;

    for (int i = 3; i <= n; ++i) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }

    return current;
}

int main()
{
    int n;
    cin >> n;
    cout << climbStairs(n);
    return 0;
}
