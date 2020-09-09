#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
//哈希表
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            um[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++){
            //避免索引等于自己
            if (um[target - nums[i]]  && um[target - nums[i]] != i){
                ans.push_back(i);
                ans.push_back(um[target - nums[i]]);
                return ans;
            }
        }
        return {};
    }
};