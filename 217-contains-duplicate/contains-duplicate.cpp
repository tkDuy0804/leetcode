#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> l;

        if(nums.size() < 1)
        {
            return false;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            l[nums[i]]++;
        }

        for(const auto pair : l)
        {
            if(pair.second > 1)
            {
                return true;
            }
        }

        return false;
    }
};