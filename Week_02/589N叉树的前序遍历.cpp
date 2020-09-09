#include<vector>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    vector<int> ans;
    vector<int> preorder(Node* root) {
        helper(root);
        return ans;
    }

    void helper(Node* root){
        //终止条件
        if (root == nullptr) return  ;
        //处理当前层
        ans.push_back(root->val);
        //进入下一层
        for (auto c : root->children){
            helper(c);
        }
        //是否需要修改参数
    }
};