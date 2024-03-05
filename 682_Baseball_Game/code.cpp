#include <numeric>
#include <vector>
#include <iostream>


class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::vector<int> record;
        for (u_int32_t i{0}; i < operations.size(); i++) {
            char opcode{operations.at(i).at(0)};
            switch(opcode) {
                case ('+'):
                    record.push_back(record.at(record.size()-1) + record.at(record.size()-2));
                    break;
                case ('D'):
                    record.push_back(2*record.at(record.size()-1));
                    break;
                case ('C'):
                    record.pop_back();
                    break;
                default:
                    record.push_back(std::stoi(operations.at(i)));
                    break;
            }
        }
        return std::accumulate(record.begin(), record.end(), 0);
    }
};