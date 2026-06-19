#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store the value and its corresponding index
        std::unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // If the complement is found, return the indices
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            
            // Otherwise, insert the current number and index into the map
            seen[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (though a solution is guaranteed)
        return {};
    }
};

