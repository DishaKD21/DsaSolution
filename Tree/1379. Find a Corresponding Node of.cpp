//1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree
// here we are saving the value of the target in one variable and we are searching in the cloned tree using bfs when we are finding that target in cloned tree then we are returning that node otherwise we are returning the nullptr
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
      if(target==nullptr)  return nullptr;
      int t=target->val;
      queue<TreeNode*> q;
      q.push(cloned);
      while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
             TreeNode* node=q.front();
             q.pop();
            if(node->val==t) return node;
            if(node->left){
               q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
      }
      return nullptr;
    }
};