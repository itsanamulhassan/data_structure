// link:https://www.codingninjas.com/studio/problems/code-find-a-node_5682

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return false;

    if (root->data == x)
    {
        return true;
    }
    bool left = isNodePresent(root->left, x);
    bool right = isNodePresent(root->right, x);

    return (left || right);
}