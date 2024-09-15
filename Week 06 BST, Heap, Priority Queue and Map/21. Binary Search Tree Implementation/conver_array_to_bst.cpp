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

Node *convert(int array[], int size, int left, int right)
{
    if (left > right)
    {
        return NULL;
    }
    int middle = (left + right) / 2;

    Node *root = new Node(array[middle]);

    Node *left_node = convert(array, size, left, middle - 1);
    Node *right_node = convert(array, size, middle + 1, right);

    root->left = left_node;
    root->right = right_node;

    return root;
}

void level_print(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        cout << front->value << " ";

        if (front->left)
            q.push(front->left);
        if (front->right)
            q.push(front->right);
    }
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    Node *root = convert(a, n, 0, n - 1);

    level_print(root);

    return 0;
}