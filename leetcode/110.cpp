class Solution {
public:
   int depth (TreeNode *root) {
        if (root == NULL) return 0;
        return max (depth(root -> left), depth (root -> right)) + 1;
    }

    bool isBalanced (TreeNode *root) {
        if (root == NULL) return true;
        
        int left=depth(root->left);
        int right=depth(root->right);
      
        if(abs(left-right)<=1){
          bool isLeftBalanced = isBalanced(root->left);
          bool isRightBalanced = isBalanced(root->right);
          return  isLeftBalanced && isRightBalanced;
        }
      
        return false;
    }
};