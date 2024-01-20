#include <bits/stdc++.h>
using namespace std;

#define perm(s, i) (s[i] == '1' || s[i] == '2' && (s[i + 1] < '7'))
class Solution
{
public:
    int numDecodings(string s)
    {
        if (s.empty() || s[0] == '0')
            return 0;
        const int n = s.size();

        int prevprev = 1,
            prev = s.back() != '0',
            curr = 0,
            i = n - 2;

        while (i >= 0)
        {
            curr = s[i] == '0'
                       ? 0
                   : perm(s, i)
                       ? (prev + prevprev)
                       : prev;

            prevprev = prev;
            prev = curr;
            i--;
        }

        return prev;
    }
};