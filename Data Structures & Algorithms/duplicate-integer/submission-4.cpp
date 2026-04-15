class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> set;
        for (size_t i=0; i<nums.size(); i++) {
            //searching through set
            auto it = set.find(nums[i]);
            if (it != set.end()) {
                return true;
            } else {
                set.insert(nums[i]);
            }
        }

        return false;
    }
};