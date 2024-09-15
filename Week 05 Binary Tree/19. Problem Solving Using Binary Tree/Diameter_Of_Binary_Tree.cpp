// link:https://www.codingninjas.com/studio/problems/diameter-of-the-binary-tree_920552

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int mx = 0;

int max_height(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    int left = max_height(root->left);
    int right = max_height(root->right);
    int diameter = left + right;

    mx = max(mx, diameter);

    return max(left, right) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
    mx = 0;

    max_height(root);
    return mx;
}
