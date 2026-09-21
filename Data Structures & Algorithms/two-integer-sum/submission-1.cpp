class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 1. prepare
        unordered_map<int, int> seen;

        int needed{0};

        // 2. compute
        for (int i = 0; i < nums.size(); ++i) {
            needed = target - nums[i];

            auto it = seen.find(needed);
            if (it != seen.end()) {
                return {it->second, i};
            }

            seen[nums[i]] = i;
        }
        
        // 3. return / edge cases
        return {};
    }
};
