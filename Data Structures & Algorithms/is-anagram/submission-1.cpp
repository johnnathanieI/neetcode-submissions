class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::string s1 = s;
        std::string s2 = t;
        std::sort(s1.begin(), s1.end());
        std::sort(s2.begin(), s2.end());
        return s1 == s2;
    }
};