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

vector<int> v;

void retrieve_leaf(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->value);
        return;
    }
    retrieve_leaf(root->left);
    retrieve_leaf(root->right);
}

int main()
{

    Node *root = input_tree();

    retrieve_leaf(root);
    sort(v.begin(), v.end(), greater<int>());

    for (auto num : v)
    {
        cout << num << " ";
    }

    return 0;
}