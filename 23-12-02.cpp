/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/?envType=daily-question&envId=2023-12-02
 * @brief 1160. Find Words That Can Be Formed by Characters
 * 
 * Time: 29ms; 97.52%
 * Mem : 17.27mb; 85.45%
 * */ 
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        vector<uint8_t> char_map(26, 0);
        for (char &c : chars)
            char_map[c - 'a']++;

        // iterate over words
        for (string &word : words)
        {
            vector<uint8_t> word_map(26, 0);

            bool is_good = true; // flag for good string

            for (auto &c : word)
                if (++word_map[c - 'a'] > char_map[c - 'a'])
                {
                    is_good = false;
                    break;
                }

            if (is_good)
                sum += word.size();
        }
        return sum;
    }
};