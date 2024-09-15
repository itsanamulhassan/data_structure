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

void level_order(Node *root)
{
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

    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = h;

    c->right = e;
    b->right = d;

    d->left = f;
    d->right = g;

    h->right = i;

    level_order(root);

    return 0;
}