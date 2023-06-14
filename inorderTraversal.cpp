/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(vector<int> &nums,TreeNode* root){
        if(root==NULL)
        return;
        inorder(nums,root->left);
        nums.push_back(root->val);
        inorder(nums,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(result,root);
        return result;
        
    }
};
