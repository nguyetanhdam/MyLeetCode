#include <bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s)
{
    reverse(s.begin(), s.end());
    while (s[0] == ' ')
    {
        s.erase(0, 1);
    }
    int k = s.find(' ');
    return (k > 0 ? k : s.length());
}

int main()
{
    string s;
    //getline(cin, s);
    s = "fly";
    cout << lengthOfLastWord(s);
    return 0;
}
