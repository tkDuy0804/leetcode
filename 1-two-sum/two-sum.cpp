class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hashmap

        unordered_map<int,int> prevVal;

        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums.at(i);
            auto it = prevVal.find(diff);

            if(it != prevVal.end())
            {
                return {prevVal.at(diff), i};
            }

            prevVal[nums.at(i)] = i;
        }

        return {};
    }
};