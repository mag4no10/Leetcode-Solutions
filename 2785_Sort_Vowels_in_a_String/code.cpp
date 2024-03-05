#include <iostream>
#include <vector>


class Solution {
    public:
        bool isVowel(const char& ch) const {
            return (0x208222>>(ch&0x1f))&1;
        }
        std::string sortVowels(const std::string& s) const {
            std::string t = s;
            std::vector<int> vowel;
            for (u_int32_t i{0}; i < s.length(); i++){
                if(isVowel(s[i])) {
                    vowel.push_back(int(s[i]));
                }
            }
            if (vowel.size() == 0) return s;
            std::sort(vowel.begin(), vowel.end());
            int j{0};
            for (u_int32_t i{0}; i < t.length(); i++){
                if(isVowel(t[i])) {
                    t[i] = char(vowel[j++]);
                }
            }
            return t;
        }
};