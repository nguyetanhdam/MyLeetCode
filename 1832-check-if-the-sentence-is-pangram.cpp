#include <bits/stdc++.h>

using namespace std;

bool checkIfPangram(string sentence)
{
    set<char> uniqueChar;
    for (char c : sentence)
    {
        uniqueChar.insert(c);
    }
    if (uniqueChar.size() == 26) return 1;
    return 0;
}

int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    if (checkIfPangram(sentence)) cout << "true";
    else cout << "false";
    return 0;
}
