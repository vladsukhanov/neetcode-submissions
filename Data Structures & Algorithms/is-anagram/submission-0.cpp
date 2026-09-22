class Solution {
public:
    // Sorting & Compare method
    // O (n logn) time
    // O (log n) space
    bool isAnagram(string s, string t) {
        // size check
        if (s.size() != t.size()) {
            return false;
        }

        // sorting two string 2 × O(N×logN) → O(N×logN)
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        
        // checking if string equal
        return s == t;
    }
};
