#include <iostream>
#include <vector>


class Solution {
    public:
        int searchInsert(std::vector<int>& nums, int target) {
            int it{0};
            for (ssize_t i{0}; i < nums.size(); i++) {
                if (nums[i] < target) {
                    it = i+1;
                }
                if (nums[i] != target) {
                    continue;
                }
                return i;
            }
            return it;
        }
};