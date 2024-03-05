#include <vector>
#include <iostream>


class Solution {
public:
    int countSeniors(const std::vector<std::string>& details) {
        u_int32_t counter{0};
        for (const auto& it : details) {
            int age = std::stoi(it.substr(11,2));
            if (age > 60) {
                counter++;
            }
        }
        return counter;
    }
};