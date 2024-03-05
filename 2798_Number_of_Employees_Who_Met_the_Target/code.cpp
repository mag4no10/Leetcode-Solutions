#include <iostream>
#include <vector>


class Solution {
    public:
        int numberOfEmployeesWhoMetTarget(const std::vector<int>& hours, int target) {
            u_int32_t counter{0};
            for (u_int32_t i{0}; i < hours.size(); i++) {
                if (hours[i] >= target) counter++;
            }
            return counter;
        }
};