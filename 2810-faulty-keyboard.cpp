#include <bits/stdc++.h>

using namespace std;

string finalString(string s)
{
    string res = "";
    for (char c : s)
    {
        if (c == 'i') reverse(res.begin(), res.end());
        else res += c;
    }
    return res;
}

int main()
{
    string s = "string";
    cout << finalString(s); // rtsng
    return 0;
}
