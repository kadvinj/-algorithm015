#include <vector>
using namespace std;

class Solution {
public:
    
        //三次反转
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();//防止k大与nums.size的情况
        reverse(nums.begin(), nums.end());//先将所有元素反转
        reverse(&nums[0],&nums[k]);//前k个反转
        reverse(&nums[k],&nums[nums.size()]);//后n-k个反转
    }
//用vector的成员函数insert与pop，先在头插入尾部，后把pop出去，但超出时间限制。
    void rotate1(vector<int>& nums, int k) {
        for(int i = 0; i < k; i++){
            nums.insert(nums.begin(),nums[nums.size() - 1]);
            nums.pop_back();
        }
    }
};