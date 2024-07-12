#include <iostream>
#include <string>
using namespace ::std;

class Solution
{
public:
    bool isUnique(string astr)
    {
        bool records[26];
        for (int i = 0; i < astr.size(); i++)
        {
            if (records[astr[i] - 'a'] == false)
                records[astr[i] - 'a'] = true;
            else
                return false;
        }
        return true;
    }
};

/**
 * 还可以通过int的位存储对应字母是否出现，消耗内存更少
 *
 */