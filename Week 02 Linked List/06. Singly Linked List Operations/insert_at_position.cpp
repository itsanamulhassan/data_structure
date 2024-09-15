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

void insert_linked_list(Node *&head, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void print_linked_list(Node *head)
{
    cout << endl
         << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void insert_at_position(Node *head, int position, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert linked list" << endl;
        cout << "Option 2: Insert node at position" << endl;
        cout << "Option 3: Print linked list" << endl;
        cout << "Option 4: Terminate" << endl;

        int option;
        cin >> option;

        if (option == 1)
        {
            int value;
            cin >> value;
            insert_linked_list(head, value);
        }
        else if (option == 2)
        {
            int position, value;
            cout << "Enter the postion: " << endl;
            cin >> position;
            cout << "Enter the postion: " << endl;
            cin >> value;
            insert_at_position(head, position, value);
        }
        else if (option == 3)
        {
            print_linked_list(head);
        }
        else if (option == 4)
        {
            break;
        }
    }

    return 0;
}