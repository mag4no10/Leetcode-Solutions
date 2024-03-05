#include <iostream>


class Solution {
    public:
        std::string mergeAlternately(const std::string& word1, const std::string& word2) {
            std::string res;
            if (word1.size() < word2.size()) {
                for (ssize_t i{0}; i < word1.size(); i++) {
                    res.push_back(word1[i]);
                    res.push_back(word2[i]);
                }
                for (ssize_t i{long(word1.size())}; i < word2.size(); i++) {
                    res.push_back(word2[i]);
                }
            }
            else if (word1.size() > word2.size()) {
                for (ssize_t i{0}; i < word2.size(); i++) {
                    res.push_back(word1[i]);
                    res.push_back(word2[i]);
                }
                for (ssize_t i{long(word2.size())}; i < word1.size(); i++) {
                    res.push_back(word1[i]);
                }
            }
            else {
                for (ssize_t i{0}; i < word1.size(); i++) {
                    res.push_back(word1[i]);
                    res.push_back(word2[i]);
                }
            }
            return res;
        }
};