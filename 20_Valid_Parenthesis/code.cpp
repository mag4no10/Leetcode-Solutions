#include <stack>
#include <iostream>

class Solution {
public:
    bool isValid(std::string s) {
        if (s.length() % 2 != 0) {
            return false;
        }
        std::stack<char> stack;
        int counter1{0},counter2{0},counter3{0},counter11{0},counter22{0},counter33{0};
        for (const auto& it : s) {
            switch (it) {
                case ('('):
                    stack.push(it);
                    counter1++;
                    break;
                case ('{'):
                    stack.push(it);
                    counter2++;
                    break;
                case ('['):
                    stack.push(it);
                    counter3++;
                    break;
                case (')'):
                    if (stack.empty() || stack.top() != '(') {
                        return false;
                    }
                    stack.pop();
                    counter11++;
                    break;
                case ('}'):
                    if (stack.empty() || stack.top() != '{') {
                        return false;
                    }
                    stack.pop();
                    counter22++;
                    break;
                case (']'):
                    if (stack.empty() || stack.top() != '[') {
                        return false;
                    }
                    stack.pop();
                    counter33++;
                    break;
            }
        }
        if (counter1 != counter11 || counter2 != counter22 || counter3 != counter33) {
            return false;
        }
        if (!stack.empty()) {
            return false;
        }
        return true;
    }
};