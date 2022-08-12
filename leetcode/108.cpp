class Solution
{
public:
  TreeNode *sortedArrayToBST(vector<int> &num)
  {
    if (num.size() == 0)
      return NULL;

    int middle = num.size() / 2;
    TreeNode *root = new TreeNode(num[middle]);

    vector<int> leftArr(num.begin(), num.begin() + middle);
    vector<int> rightArr(num.begin() + middle + 1, num.end());

    root->left = sortedArrayToBST(leftArr);
    root->right = sortedArrayToBST(rightArr);

    return root;
  }
};