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

void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}

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

void insert_at_position(Node *&head, int position, int value)
{

    if (position > linked_list_size(head))
    {
        return;
    }

    Node *new_node = new Node(value);
    Node *temp = head;

    if (position == 0)
    {
        insert_at_head(head, value);
        return;
    }
    else
    {
        for (int i = 1; i <= position - 1; i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value, query;
    while (value != -1)
    {
        cin >> value;
        input_linked_list(head, tail, value);
    }

    cin >> query;
    for (int i = 0; i < query; i++)
    {
        int position, value;
        cin >> position >> value;
        if (position > linked_list_size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_position(head, position, value);
            print_linked_list(head);
        }
    }

    return 0;
}