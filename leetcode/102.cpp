class Solution {
public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    queue<TreeNode*> q; q.push(root);
    
    while (!q.empty())
    {
      int n = q.size();
      vector<int> crtLevel;
      
      for (int i = 0; i < n; i++)
      {
        TreeNode* p = q.front(); q.pop();
        if (p != nullptr)
        {
          crtLevel.push_back(p->val);
          q.push(p->left);
          q.push(p->right);
        }
      }

      if (crtLevel.size() > 0) 
        result.push_back(move(crtLevel));
    }

    return result;
  }
};