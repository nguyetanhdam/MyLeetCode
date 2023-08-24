class Solution {
public:
    int sotu (string s)
    {
        int cnt = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ') cnt++;
        }
        return cnt;
    }

    int mostWordsFound(vector<string>& sentences)
    {
        int maxx = 0;
        for (int i = 0; i < sentences.size(); i++)
        {
            if (maxx < sotu(sentences[i]))
            {
                maxx = sotu(sentences[i]);
            }
        }
        return maxx;
    }
};
