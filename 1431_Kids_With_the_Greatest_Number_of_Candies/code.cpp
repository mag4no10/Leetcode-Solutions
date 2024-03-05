#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
    public:
        std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
            int max = *(std::max_element(candies.begin(), candies.end()));
            std::vector<bool> ismax;
            ismax.reserve(candies.size());
            for (const auto& it : candies) {
                if (max <= it + extraCandies) {
                    ismax.push_back(1);
                    continue;
                }
                ismax.push_back(0);
            }
            return ismax;
        }
};