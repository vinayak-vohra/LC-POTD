#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.size() != word2.size())
            return false;

        vector<int> chCnt1(26, 0), chCnt2(26, 0);

        for (int i = 0; i < word1.size(); i++)
            chCnt1[word1[i] - 'a']++, chCnt2[word2[i] - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if ((bool)chCnt1[i] ^ (bool)chCnt2[i])
                return false;
        }

        sort(chCnt1.begin(), chCnt1.end());
        sort(chCnt2.begin(), chCnt2.end());

        for (int i = 0; i < 26; i++)
        {
            if (chCnt1[i] != chCnt2[i])
                return false;
        }
        return true;
    }
};
