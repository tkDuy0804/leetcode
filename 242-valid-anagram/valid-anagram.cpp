class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char, int> countS, countT;

    if(s.length() != t.length())
    {
        return false;
    }

    for(int i = 0; i < s.length(); i++)
    {
        countS[s.at(i)] = countS[s.at(i)] + 1;
        countT[t.at(i)] = countT[t.at(i)] + 1;
    }

    for(auto &pair : countS)
    {
        char c = pair.first;
        if(countS[c] != countT[c])
        {
            return false;
        }
    }

    return true;
    }
};