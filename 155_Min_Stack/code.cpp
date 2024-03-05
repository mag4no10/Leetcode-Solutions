#include <algorithm>
#include <vector>


class MinStack {
    public:
        MinStack() {
            
        }
        
        void push(int val) {
            vals_.emplace_back(val);
        }
        
        void pop() {
            vals_.pop_back();
        }
        
        int top() {
            return vals_.back();
        }
        
        int getMin() {
            return *std::min_element(vals_.begin(), vals_.end());
        }
    private:
        int size_{0};
        std::vector<int> vals_;
};