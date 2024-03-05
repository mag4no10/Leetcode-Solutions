#include <iostream>
#include <vector>


class Solution {
    public:
        int removeElement(std::vector<int>& nums, int val) {
            int counter{0};
            for (u_int32_t it{0}; it < nums.size(); it++) {
                if (nums.at(it) != val) {
                    nums.at(counter) = nums.at(it);
                    counter++;
                }
            }
            return counter;
        }
};
