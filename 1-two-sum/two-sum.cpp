class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hashmap

        unordered_map<int,int> prevVal;
        vector<int> indices;

        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums.at(i);
            auto it = prevVal.find(diff);

            if(it != prevVal.end())
            {
                indices.push_back(prevVal.at(diff));
                indices.push_back(i);
                return indices;
            }

            prevVal[nums.at(i)] = i;
        }

        return vector<int>{};
    }
};