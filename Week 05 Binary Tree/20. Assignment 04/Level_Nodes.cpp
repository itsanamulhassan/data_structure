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

        Node *front = q.front();
        q.pop();

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

        if (front->left)
            q.push(front->left);

        if (front->right)
            q.push(front->right);
    }

    return root;
}

void print_level_nodes(Node *root, int level)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    bool valid_level = false;

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int current_level = pr.second;
        q.pop();

        if (current_level == level)
        {
            cout << node->value << " ";
            valid_level = true;
        }

        if (node->left)
        {
            q.push({node->left, current_level + 1});
        }
        if (node->right)
        {
            q.push({node->right, current_level + 1});
        }
    }

    if (!valid_level)
    {
        cout << "Invalid" << endl;
    }
}

int main()
{

    Node *root = input_tree();

    int level;
    cin >> level;

    print_level_nodes(root, level);

    return 0;
}