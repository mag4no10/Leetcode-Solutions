#include <iostream>
#include <vector>


class Solution {
    public:
        std::vector<int> buildArray(std::vector<int>& nums) {
            std::vector<int> res;
            res.reserve(nums.size());
            for (u_int32_t i{0}; i < nums.size(); i++) {
                res.push_back(nums[nums[i]]);
            }
            return res;
        }
};  