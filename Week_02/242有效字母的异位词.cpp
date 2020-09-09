#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


class Solution {
public:
    //方法1，先sort排序然后再对比
    bool isAnagram1(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (t == s) return true;
        return false;
    }
    
    //方法2. 哈希表
    bool isAnagram(string s, string t) {
        unordered_map<char, int> um;
        for (int i = 0; i < max(s.length(), t.length()); i++){
            um[s[i]] ++;
            um[t[i]] --;
        }
        for (auto c : um){
            if (c.second != 0) return false;
        }
        return true;
    }
};