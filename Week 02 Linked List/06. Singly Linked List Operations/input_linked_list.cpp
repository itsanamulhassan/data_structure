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

void insert_at_position(Node *head, int position, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid input" << endl;
            return;
        }
    }

    new_node->next = temp->next;
    temp->next = new_node;
    cout << "Insert at postion " << position << endl;
}
void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;

    new_node->next = temp;
    head = new_node;
}
void insert_at_tail(Node *&head, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;

    if (head == NULL)
    {
        head = new_node;
        cout << "Insert at head" << endl;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    cout << "Insert at tail" << endl;
}

void print_linked_list(Node *head)
{
    cout << "Value of the linked list: ";
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

    int value;
    Node *head = NULL;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, value);
    }
    print_linked_list(head);

    return 0;
}