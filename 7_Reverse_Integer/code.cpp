#include <iostream>
#include <algorithm>


class Solution {
    public:
        int reverse(int x) {
            std::string rev = std::to_string(x);
            std::reverse(rev.begin(), rev.end());
            bool is_neg{false};
            if (rev[rev.size()-1] == '-') {
                is_neg = true;
                rev.pop_back();
            }
            int new_num{0};
            try {
                new_num = std::stoi(rev);
            }
            catch (const std::out_of_range& oor) {
                return 0;
            }
            if (is_neg) {
                new_num = 0 - new_num;
            }
            return new_num;
        }
};