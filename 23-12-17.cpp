/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/design-a-food-rating-system/submissions/1121823238/?envType=daily-question&envId=2023-12-17
 * @brief 2353. Design a Food Rating System
 *
 * Time: 393ms; 69.44%
 * Mem : 166.28mb; 66.06%
 * */

#include <bits/stdc++.h>
using namespace std;

class FoodRatings
{
    struct comparator
    {
        bool operator()(const pair<int, string> &l, const pair<int, string> &r) const
        {
            return l.first != r.first ? l.first > r.first : l.second < r.second;
        }
    };

    unordered_map<string, set<pair<int, string>, comparator>> c_to_f;
    unordered_map<string, int> rating;
    unordered_map<string, string> f_to_c;

public:
    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings)
    {
        for (int i = 0; i < foods.size(); i++)
        {
            c_to_f[cuisines[i]].insert({ratings[i], foods[i]});
            f_to_c.insert({foods[i], cuisines[i]});
            rating.insert({foods[i], ratings[i]});
        }
    }

    void changeRating(string food, int newRating)
    {
        string c = f_to_c[food];
        int r = rating[food];
        rating[food] = newRating;
        c_to_f[c].erase({r, food});
        c_to_f[c].insert({newRating, food});
    }

    string highestRated(string cuisine)
    {
        return (*(c_to_f[cuisine].begin())).second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */