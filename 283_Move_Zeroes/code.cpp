#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
    public:
        void moveZeroes(std::vector<int>& nums) {
            unsigned int count_of_zeros = std::count(nums.begin(), nums.end(), 0);
            std::cout << count_of_zeros;
            nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());
            for (int i{0}; i < count_of_zeros; i++) {
                nums.push_back(0);
            }
        }
};