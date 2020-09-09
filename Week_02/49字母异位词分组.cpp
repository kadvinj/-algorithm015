#include<vector>
#include<algorithm>
#include<unordered_map>


//先用临时变量把每个字符串排序好，然后创建一个键为排序号的字符串，值是原本字符串的vector，这样就可以将异位词分类完毕。
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> um;  
        for (auto c: strs){
            string temp = c;
            sort(temp.begin(), temp.end());
            um[temp].push_back(c);
        }

        for (auto &i: um){
            ans.push_back(i.second);
        }
        return ans;
    }
};