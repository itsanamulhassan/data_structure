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

int size_linked_list(Node *head)
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
int print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int print_linked_list_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

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

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
}

void insert_at_position(Node *&head, Node *&tail, int position, int value)
{

    if (position == 0)
    {
        insert_at_head(head, tail, value);
        return;
    }

    if (position == size_linked_list(head))
    {
        insert_at_tail(head, tail, value);
        return;
    }

    Node *new_node = new Node(value);
    Node *temp = head;

    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = new_node;
    }
    temp->next = new_node;
    new_node->prev = temp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int position, value;
        cin >> position >> value;

        if (position < 0 || position > size_linked_list(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_position(head, tail, position, value);
            print_linked_list(head);
            print_linked_list_reverse(tail);
        }
    }

    return 0;
}