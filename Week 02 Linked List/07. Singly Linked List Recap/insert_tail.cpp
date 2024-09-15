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
}
void linked_list_print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void insert_position(Node *&head, int position, int value)
{

    if (position > linked_list_size(head))
    {
        cout << "Invalid position" << endl;
        return;
    }

    Node *new_node = new Node(value);
    Node *temp = head;

    if (position == 0)
    {
        new_node->next = head;
        head = new_node;
        cout << "Insert at head" << endl;
    }
    else
    {
        for (int i = 1; i <= position - 1; i++)
        {
            temp = temp->next;
        }

        new_node->next = temp->next;
        temp->next = new_node;
        cout << "Insert at postion " << position << endl;
    }
}

void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail == new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
};

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    insert_position(head, 10, 1111);
    insert_tail(head, d, 10000);
    insert_tail(head, d, 444);

    linked_list_print(head);

    return 0;
}