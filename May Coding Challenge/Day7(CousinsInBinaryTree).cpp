/*

In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

Return true if and only if the nodes corresponding to the values x and y are cousins.

 

Example 1:


Input: root = [1,2,3,4], x = 4, y = 3
Output: false
Example 2:

vv

Input: root = [1,2,3,null,4,null,5], x = 5, y = 4
Output: true
Example 3:



Input: root = [1,2,3,null,4], x = 2, y = 3
Output: false
 

Note:

The number of nodes in the tree will be between 2 and 100.
Each node has a unique integer value from 1 to 100.


*/


class Solution {
    int find_HeightParent(TreeNode *curr,int &parent,int value,int height)
    {
        if(!curr)
            return 0;
        if(curr->val==value)
            return height;
        
        parent = curr->val;
        int left = find_HeightParent(curr->left,parent,value,height+1);
        if(left)
            return left;
        parent = curr->val;
        int right = find_HeightParent(curr->right,parent,value,height+1);
        return right;
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        if(root->val==x || root->val==y)
            return false;
            
        int parent=-1;
        int xHeight = find_HeightParent(root,parent,x,0);
        
        int yParent=-1;
        int yHeight = find_HeightParent(root,yParent,y,0);
        
        if(parent!=yParent && xHeight==yHeight)
            return true;        
        return false;
    }
};
