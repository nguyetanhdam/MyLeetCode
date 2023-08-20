#include <bits/stdc++.h>

using namespace std;

string biendoi(string s)
{
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            res += s[i];
        }
        else if  (s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i] + 'a' - 'A';
        }
    }
    return res;
}

bool isPalindrome(string s)
{
    s = biendoi(s);
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1]) return 0;
    }
    return 1;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);
    return 0;
}
