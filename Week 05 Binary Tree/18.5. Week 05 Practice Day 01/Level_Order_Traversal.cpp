//////////////////////// PROBLEM LINK ////////////////////////
//----> https://www.codingninjas.com/studio/problems/level-order-traversal_796002

#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> v;
void level_order(BinaryTreeNode<int> *root)
{

    if (root == NULL)
        return;

    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *current = q.front();
        q.pop();

        v.push_back(current->val);

        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    v.clear();
    level_order(root);
    return v;
}