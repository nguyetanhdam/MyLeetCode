#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows)
{
    if (numRows == 1) return {{1}};
    if (numRows == 2) return {{1}, {1, 1}};
    vector<vector<int>> res(numRows);
    vector<int> row1 = {1};
    vector<int> row2 = {1, 1};
    res.push_back(row1);
    res.push_back(row2);
    for (int i = 2; i < numRows; i++)
    {
        vector<int> row_i = {1};
        for (int j = 0; j < res[i - 1].size(); j++)
        {
            row_i.push_back(res[i - 1][j] + res[i - 1][j + 1]);
        }
        res.push_back(row_i);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> res = generate(n);
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
