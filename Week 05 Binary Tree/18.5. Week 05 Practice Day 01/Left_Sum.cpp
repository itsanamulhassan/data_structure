//////////////////////// PROBLEM LINK ////////////////////////
//----> https://www.codingninjas.com/studio/problems/left-sum_920380

#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/

long long leftSum(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    long long sum = 0;

    if (root->left)
        sum += leftSum(root->left);
    if (root->right)
        sum += leftSum(root->right);

    if (root->left)
    {
        sum += root->left->data;
    }

    return sum;
}