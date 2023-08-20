#include<bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    while (s.length() > 0)
    {
        int pop;
        if (s[0] == '(')
        {
            pop = s.find(')');
            if (pop > 0)
            {
                s.erase(pop, 1);
                s.erase(0, 1);
            }
            else break;
        }
        else if (s[0] == '[')
        {
            pop = s.find(']');
            if (pop > 0)
            {
                s.erase(pop, 1);
                s.erase(0, 1);
            }
            else break;
        }
        else if (s[0] == '{')
        {
            pop = s.find('}');
            if (pop > 0)
            {
                s.erase(pop, 1);
                s.erase(0, 1);
            }
            else break;
        }
    }
    if (s.length() == 0) return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    if (isValid(s)) cout << "Yes";
    else cout << "No";
    return 0;
}
