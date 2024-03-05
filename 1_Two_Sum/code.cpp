#include <iostream>
#include <vector>


class Solution {
    public:
        std::vector<int> twoSum(const std::vector<int>& nums, const int& target) {
            std::vector<int> sum;
            for (u_int32_t i{0}; i < nums.size(); i++) {
                for (u_int32_t j{i+1}; j < nums.size(); j++) {
                    if (nums[i] + nums[j] == target) {
                        sum.push_back(i); //insert would be beter
                        sum.push_back(j);
                        goto fin;
                    }
                }
            }
            fin:
            return sum;
        }
};