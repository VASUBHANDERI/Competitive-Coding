/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s)
    {

        s.erase(std::remove_if(s.begin(), s.end(),
                               [](auto const &c) -> bool
                               { return !std::isalnum(c); }),
                s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n = s.size();

        if (n == 1 || n == 0)
        {
            return true;
        }
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
