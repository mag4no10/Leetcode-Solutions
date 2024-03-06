#include <iostream>
#include <vector>
#include <sstream>


class Solution {
    public:
        std::string reverseWords(const string& str) {
            std::istringstream iss(str);
            std::string word;
            std::vector<std::string> reversed;
            while (iss >> word) {
                reversed.insert(reversed.begin(), {word, " "});
            }
            std::string res;
            for (unsigned i = 0; i < reversed.size(); i++) {
                res += reversed.at(i);
            }
            res.pop_back();
            return res;
        }
};
