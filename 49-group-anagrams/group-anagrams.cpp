#include <unordered_map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> string_map;
        vector<vector<string>> result;

        for(const auto& s : strs)
        {
            vector<int> pattern(26, 0);
            
            for(char c : s)
            {
                pattern[c - 'a']++;
            }

            string key = to_string(pattern[0]);
            
            for(int i = 1; i < 26; i++)
            {
                key += ", " + to_string(pattern[i]);
            }
            
            string_map[key].push_back(s);
        }

        for(const auto& pair : string_map)
        {
            result.push_back(pair.second);
        }

        return result;        
    }
};