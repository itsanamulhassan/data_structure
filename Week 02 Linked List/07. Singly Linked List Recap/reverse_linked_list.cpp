#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void print_recursion(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    print_recursion(temp->next);
    cout << temp->value << " ";
};

int main()
{
    Node *head = new Node(30);
    Node *a = new Node(10);
    Node *b = new Node(40);
    Node *c = new Node(70);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }

    print_recursion(head);

    return 0;
}