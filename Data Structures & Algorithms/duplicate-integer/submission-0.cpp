#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // 1. prepare
        nums_seen_set.reserve(100000);

        // 2. compute
        for(int num : nums)
        {
            // insert().second returns false if duplicate
            if(!nums_seen_set.insert(num).second) 
            {
                return true;
            }
        }

        // 3. return
        return false;
    }

private:
    std::unordered_set<int> nums_seen_set;
};