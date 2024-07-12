#include <iostream>
using namespace ::std;

class Solution
{
public:
    bool CheckPermutation(string s1, string s2)
    {
        if (s1.size() != s2.size())
            return false;
        int record[26]; // 存储字符出现的次数，若可重排，两者出现次数可以抵消
        for (int i = 0; i < s1.size(); i++)
        {
            record[s1[i] - 'a']++;
            record[s2[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (record[i] != 0)
                return false;
        }
        return true;
    }
};