#include <iostream>
#include <vector>


class Solution {
    public:
        void reverseString(std::vector<char>& s) {
            for (u_int32_t i{0}; i < s.size() / 2 ; i++) {
                char aux = s[i];
                s[i]  = s[s.size() - i - 1];
                s[s.size() -i - 1] = aux;
            }
        }
};