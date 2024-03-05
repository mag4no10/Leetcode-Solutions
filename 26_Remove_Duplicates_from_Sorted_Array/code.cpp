#include <vector>
#include <iostream>


class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int counter{1};
        for (u_int32_t i{1}; i < nums.size(); i++) {
            if (nums.at(i) != nums.at(i-1)) {
                nums.at(counter) = nums.at(i);
                counter++;
            }
        }
        return counter;
    }
};