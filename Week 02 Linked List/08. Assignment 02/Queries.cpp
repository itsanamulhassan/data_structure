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

void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{

    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
};

int linked_list_size(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_at_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
}

void delete_at_position(Node *&head, Node *&tail, int position)
{
    if (position >= linked_list_size(head) || head == NULL)
    {
        return;
    }

    if (position == 0)
    {
        delete_at_head(head);
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i <= position - 1; i++)
        {
            temp = temp->next;
        }

        Node *target_node = temp->next;
        temp->next = temp->next->next;
        if (temp->next == NULL)
        {
            tail = temp;
            return;
        }
        delete target_node;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_at_position(head, tail, V);
        }

        print_linked_list(head);
    }

    return 0;
}