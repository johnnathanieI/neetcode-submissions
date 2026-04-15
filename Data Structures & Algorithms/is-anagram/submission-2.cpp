class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char, int> countS;
        std::unordered_map<char, int> countT;
        for (size_t i=0;i<s.size(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        for (const auto& pair : countS) {
            char key = pair.first;
            int count = pair.second;

            if (countT.find(key) == countT.end() || countT[key] != count) {
                return false;
            }
        }
        return true;
    }
};