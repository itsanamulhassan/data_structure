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

void insert_at_tail(Node *&head, Node *&tail, int value)
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

int max_value(Node *head)
{
    Node *temp = head;
    int value = INT_MIN;
    while (temp != NULL)
    {
        if (value < temp->value)
        {
            value = temp->value;
        }
        temp = temp->next;
    }
    return value;
}
int min_value(Node *head)
{
    Node *temp = head;
    int value = INT_MAX;
    while (temp != NULL)
    {
        if (value > temp->value)
        {
            value = temp->value;
        }
        temp = temp->next;
    }
    return value;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (value != -1)
    {
        cin >> value;
        insert_at_tail(head, tail, value);
    }

    cout << max_value(head) - min_value(head) << endl;

    return 0;
}