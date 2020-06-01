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
    
    void mirror(TreeNode* curr)
    {
        
          if(curr==NULL)
              return;
          else
            {


                mirror(curr->left); 
                mirror(curr->right); 
                TreeNode* temp;

                temp = curr->left; 
                curr->left = curr->right; 
                curr->right = temp; 
            }        
    }
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        
            mirror(root);
            return root;
    }
};
