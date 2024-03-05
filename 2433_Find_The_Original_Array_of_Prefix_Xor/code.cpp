#include <vector>
#include <iostream>


class Solution {
    public:
        std::vector<int> findArray(const std::vector<int>& pref) {
            std::vector<int> arr;
            arr.reserve(pref.size());
            arr.push_back(pref[0]);
            for (u_int32_t i{1}; i < pref.size(); i++) {
                arr.push_back(pref[i] ^ pref[i-1]);
            }
            return arr;
        }
};