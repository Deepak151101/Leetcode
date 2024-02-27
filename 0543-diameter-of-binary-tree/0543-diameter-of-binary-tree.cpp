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
    static int height(TreeNode* root){
        if(root == nullptr) return 0;
        return 1 + std::max(height(root->left), height(root->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        int dl = diameterOfBinaryTree(root->left);
        int dr = diameterOfBinaryTree(root->right);
        int cur = height(root->left) + height(root->right);
        return std::max(cur, std::max(dl, dr));
    }
};