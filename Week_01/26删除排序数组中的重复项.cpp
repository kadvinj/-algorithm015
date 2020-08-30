#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if(nums.empty()) return 0;
    int a = 0, b = 1;
        for (b ; b < nums.size(); b++){
            if (nums[b] != nums[a]){
                nums[++a] = nums[b];        //++a是因为上一个元素要保留，所以赋值给下一个元素
            }
        }
        return a+1;//加上第一个元素
    }
};