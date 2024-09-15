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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void print_linked_list_reserve(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
}

int list_size(Node *head)
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
void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void insert_at_tail(Node *&tail, int value)
{
    Node *new_node = new Node(value);

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

void insert_at_position(Node *&head, int position, int value)
{
    if (list_size(head) < position)
    {
        cout << "Invalid" << endl;
        return;
    }
    Node *new_node = new Node(value);
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }

    if (position == 0)
    {
        insert_at_head(head, value);
    }
    else
    {
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->next->prev = new_node;
        new_node->prev = temp;
    }
}
int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    Node *tail = c;

    // insert_at_position(head, 0, 111);
    insert_at_tail(tail, 200);
    insert_at_tail(tail, 20);
    print_linked_list(head);
    // cout << list_size(head) << endl;
    // print_linked_list_reserve(tail);

    return 0;
}