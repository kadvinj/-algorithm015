#include<vector>
#include<queue>
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

//BFS
class Solution {
public:
    
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if(root == nullptr) return result;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()){
            vector<int> tmp;
            for (int i = q.size(); i > 0; i--){
                for (auto &it : q.front()->children){
                    if (it) q.push(it);
                }  
                tmp.push_back(q.front()->val);
                q.pop();
            }
            result.push_back(tmp);
        }
        return result;
    }
};