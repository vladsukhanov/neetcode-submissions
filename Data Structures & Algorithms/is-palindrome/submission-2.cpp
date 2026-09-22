class Solution {
public:
    // two pointers
    // O(n) time
    // O(1) space (no extra space)
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right)
        {
            // only letters
            while (left < right && !std::isalnum(s[left]))
            {
                left++;
            }

            // only letters
            while (left < right && !std::isalnum(s[right]))
            {
                right--;
            }

            // compare to lower-case letters
            if (std::tolower(s[left]) != std::tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }


    // filtering and reversing
    // O(n) time
    // O(n) space
    bool isPalindrome1(string s) {
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
