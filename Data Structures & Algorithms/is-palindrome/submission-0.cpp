class Solution {
public:
    // filtering and reversing
    // O(n) time
    // O(n) space
    bool isPalindrome(string s) {
        std::string filtered = ""s;

        for (auto letter : s) // O(n) time
        {
            if (std::isalnum(letter))
            {
                filtered += std::tolower(letter);
            }
        }

        // reverse the string
        std::string reversed = filtered; // O(n) space here
        std::reverse(reversed.begin(), reversed.end());

        return filtered == reversed;
    }
};
