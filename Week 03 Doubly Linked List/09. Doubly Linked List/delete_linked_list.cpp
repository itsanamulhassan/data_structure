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

        head->prev = new_node;
        head = new_node;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    if (head == NULL)
    {
        head = tail;
        return;
    }

    Node *new_node = new Node(value);

    new_node->prev = tail->next;
    tail->next = new_node;
    tail = new_node;
}

void delete_at_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    Node *target = head;

    head = head->next;
    delete target;
    head->prev = NULL;
}

void delete_at_tail(Node *&head, Node *&tail)
{

    Node *target = tail;

    if (tail == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (head == tail)
    {
        delete tail;
        tail = NULL;
        head = NULL;
    }
    else
    {

        Node *delBack = tail;
        Node *nodeToDelete = delBack;
        delBack = delBack->prev;
        delBack->next = NULL;
        delete nodeToDelete;
        tail = delBack;
    }
}

void insert_at_position(Node *&head, int position, int value)
{

    if (linked_list_size(head) < position)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (position == 0)
    {
        insert_at_head(head, value);
        return;
    }

    Node *new_node = new Node(value);
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }

    new_node->prev = temp;
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;
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
};
void print_linked_list_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
};
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

    // insert_at_head(head, 200);
    insert_at_position(head, 0, 555);
    insert_at_tail(head, tail, 3);
    insert_at_tail(head, tail, 4);
    insert_at_tail(head, tail, 5);

    // delete_at_head(head);
    // delete_at_head(head);
    print_linked_list(head);
    delete_at_tail(head, tail);
    print_linked_list(head);

    return 0;
}