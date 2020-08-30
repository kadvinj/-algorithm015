#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            
            if(++digits[i] == 10)
            {
                digits[i] = 0;
            }
            else return digits;//这里return很重要，如果没有进位到最后一位，则直接返回值，否则等待循环完毕，最高位要+1，所以vector头要+1
        }

        digits.insert(digits.begin(),1);
        return digits;
    }
};