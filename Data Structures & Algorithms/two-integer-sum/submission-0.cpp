class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> final;
        for (size_t i = 0; i < nums.size(); i++) {
            for (size_t j = i+1; j < nums.size(); j++) {
                if ((nums[i] + nums[j]) == target) {
                    int index1 = (int)i;
                    int index2 = (int)j;
                    final = {index1, index2};
                    return final;
                }
            }
        }
        return final;
    }
};