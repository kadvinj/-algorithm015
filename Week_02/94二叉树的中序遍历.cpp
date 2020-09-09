#include<vector>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 

 //记住模板
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        helper(root);
        return ans;
    }
    void helper(TreeNode* root){
        if (root == nullptr) return;
        helper(root->left);
        ans.push_back(root->val);
        helper(root->right);
    }
};