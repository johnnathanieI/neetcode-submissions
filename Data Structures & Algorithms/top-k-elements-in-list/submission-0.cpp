class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> um;
        
        for (size_t i = 0; i < nums.size(); i++) {
            um[nums[i]]++;
        }

        std::vector<std::pair<int, int>> temp(um.begin(), um.end());
        std::sort(temp.begin(), temp.end(),
            [](const auto& a, const auto& b) {
                return a.second > b.second;
            }
        );

        std::vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(temp[i].first);
        }
        std::sort(result.begin(), result.end());
        return result;
    }
};