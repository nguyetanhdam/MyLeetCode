#include <bits/stdc++.h>

using namespace std;

string defangIPaddr(string address)
{
    string res = "";
    for (int i = 0; i < address.length(); i++)
    {
        if (address[i] == '.') res += "[.]";
        else res += address[i];
    }
    return res;
}

int main()
{
    string s;
    cin >> s;
    cout << defangIPaddr(s);
    return 0;
}
