#include <bits/stdc++.h>
using namespace std;

class RandomizedSet
{
public:
    RandomizedSet() {}

    bool insert(int val)
    {
        if (indices.count(val))
        {
            return false; // Already exists
        }
        data.push_back(val);
        indices[val] = data.size() - 1; // Store index for efficient removal
        return true;
    }

    bool remove(int val)
    {
        if (!indices.count(val))
        {
            return false; // Not found
        }
        int index = indices[val];
        // Swap with last element and update indices
        std::swap(data[index], data[data.size() - 1]);
        indices[data[index]] = index;
        data.pop_back();
        indices.erase(val);
        return true;
    }

    int getRandom()
    {
        return data[rand() % data.size()]; // Randomly select from data vector
    }

private:
    std::vector<int> data;                // Stores inserted values
    std::unordered_map<int, int> indices; // Maps values to their indices in data
};