#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
    public:
        double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
            std::vector<int> merge(nums1);
            merge.insert(merge.end(), nums2.begin(), nums2.end());
            //std::sort(merge.begin(), merge.end());
            ssize_t it = merge.size() / 2;
            std::nth_element(merge.begin(), merge.begin()+it, merge.end());
            //double median = merge[it];
            if (merge.size() % 2 == 1) {
                return double(merge[it]);
            }
            std::nth_element(merge.begin(), merge.begin()+it-1, merge.end());
            return (double(merge[it]) + merge[it-1]) / 2;
        }
};