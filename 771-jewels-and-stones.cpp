#include <bits/stdc++.h>

using namespace std;

int dem(string s, char c)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c) res++;
    }
    return res;
}

int numJewelsInStones(string jewels, string stones)
{
    int res = 0;
    for (int i = 0; i < jewels.length(); i++)
    {
        char c = jewels[i];
        res += dem(stones, c);
    }
    return res;
}

int main()
{
    string jewels, stones;
    cin >> jewels >> stones;
    cout << numJewelsInStones(jewels, stones);
    return 0;
}
