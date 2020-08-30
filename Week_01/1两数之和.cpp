//（亚马逊、字节跳动、谷歌、Facebook、苹果、微软在半年内面试中高频常考）
#include <vector>
using namespace std;

class Solution {
public:



//暴力求解
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>output;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                int tmp = nums[i] + nums[j];
                if (tmp == target)
                {
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        }
        return output;
    }
};