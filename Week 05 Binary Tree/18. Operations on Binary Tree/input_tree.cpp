#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int value;
    cin >> value;
    Node *root;

    if (value == -1)
        root = NULL;
    else
        root = new Node(value);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 01. GETTING OUTSIDE
        Node *front = q.front();
        q.pop();

        // 02. DO WHAT YOU WANT
        int left_value, right_value;
        cin >> left_value >> right_value;

        Node *left, *right;

        if (left_value == -1)
            left = NULL;
        else
            left = new Node(left_value);

        if (right_value == -1)
            right = NULL;
        else
            right = new Node(right_value);

        front->left = left;
        front->right = right;

        // 03. ADD THE CHILDREN
        if (front->left)
            q.push(front->left);

        if (front->right)
            q.push(front->right);
    }

    return root;
}

void level_order(Node *root)
{

    if (root)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        // 01. STEP -- SELECT ON ITEM
        Node *front = q.front();
        q.pop();

        // 02. STEP -- FINISHED ALL THE TASK
        cout << front->value << " ";

        // 03. STEP -- GET ALL THE CHILDREN IF ITS AVAILABLE
        // THIS WILL GET ALL THE CHILDREN LEFT --> RIGHT
        if (front->left)
            q.push(front->left);
        if (front->right)
            q.push(front->right);

        // // THIS WILL GET ALL THE CHILDREN RIGHT --> LEFT
        // if (front->right)
        //     q.push(front->right);
        // if (front->left)
        //     q.push(front->left);
    }
}

int main()
{

    Node *root = input_tree();
    level_order(root);

    return 0;
}