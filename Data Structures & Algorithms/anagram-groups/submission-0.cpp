class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> um;
        //traverse array
        for (size_t i = 0; i < strs.size(); i++) {
            //sort string
            std::string temp = strs[i];
            std::sort(temp.begin(), temp.end());
            // if the sorted key does not exist create new one and add or if it does just push it in
            um[temp].push_back(strs[i]);
        }

        std::vector<std::vector<std::string>> result;
        for (const auto& i : um) {
            result.push_back(i.second);
        }
        //return something like [["str"]]
        return result;
    }
};