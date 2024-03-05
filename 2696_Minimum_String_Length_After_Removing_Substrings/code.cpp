#include <iostream>


class Solution {
    public:
        int minLength(std::string& s) {
            std::string AB("AB"), CD("CD");
            while (s.find(AB) != std::string::npos || s.find(CD) != std::string::npos) {
                std::size_t found = s.find(AB);
                while (found != std::string::npos) {
                    s.erase(found,2);
                    found = s.find(AB);
                }
                found = s.find(CD);
                while (found != std::string::npos) {
                    s.erase(found,2);
                    found = s.find(CD);
                }
            }
            return s.length();
        }
};