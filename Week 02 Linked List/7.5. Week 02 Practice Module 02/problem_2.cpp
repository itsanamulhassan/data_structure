#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->next = NULL;
        this->value = value;
    }
};

void input_linked_list(Node *&head, Node *&tail, int value)
{
    if (value == -1)
        return;
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;

        return;
    }

    tail->next = new_node;
    tail = new_node;
};

void print_reverse(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
        return;
    print_reverse(temp->next);
    cout << temp->value << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (value != -1)
    {
        cin >> value;
        input_linked_list(head, tail, value);
    }
    print_reverse(head);

    return 0;
}