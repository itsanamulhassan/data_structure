#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);
    if (tail == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}
int linked_list_size(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

bool insert_at_position(Node *&head, Node *&tail, int position, int value)
{
    Node *new_node = new Node(value);
    if (position == 0)
    {
        insert_at_head(head, tail, value);
        return true;
    }

    else if (position > linked_list_size(head))
    {
        return false;
    }

    else if (position == linked_list_size(head))
    {
        insert_at_tail(head, tail, value);
        return true;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next->prev = new_node;
        temp->next = new_node;
        new_node->prev = temp;
        return true;
    }
}

void print_linked_list(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_linked_list_reserve(Node *tail)
{
    if (tail == NULL)
    {
        return;
    }
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int query;
    cin >> query;
    for (int i = 0; i < query; i++)
    {
        int position, value;
        cin >> position >> value;
        if (insert_at_position(head, tail, position, value))
        {
            print_linked_list(head);
            print_linked_list_reserve(tail);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}