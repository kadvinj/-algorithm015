#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
//直接使用stl::vector的member resize将num1缩小至有效元素，然后再insertnum2, 最后再去sort排序，但此方法有点忽略了nums1与nums2本身就是有序的。
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
    }
};