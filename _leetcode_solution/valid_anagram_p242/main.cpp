#include <iostream>
#include <string>
#include <unordered_map>

#include "Hashmap.h"
#include "Sorting.h"

int main()
{
    // Hashmap solution;
    Sorting solution;
    std::string s{"hello"};
    std::string t{"olleh"};

    auto result = solution.isAnagram(s, t);

    if(result)
    {
        std::cout << "[PASS]" << "\n";
    }
    else
    {
        std::cout << "[FAIL]" << "\n";
    }

    return 0;
}