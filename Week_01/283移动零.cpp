#include<iostream>
#include<vector>

using namespace std;
//双指针，做vector交换的函数swap，与解法一不同的是一步完成交换
class Solution {
public:
void moveZeroes(vector<int>& nums) {
for (int last_non_zero = 0, cur = 0; cur < nums.size(); cur++){
if (nums[cur] != 0){   
    swap(nums[cur], nums[last_non_zero++]);//如果不等于0，则交换位置
}
}
}
};