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

void insert_at_tail(Node *&head, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;

    if (head == NULL)
    {
        head = new_node;
        cout << endl
             << "Insert at head" << endl;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    cout << endl
         << "Insert at tail" << endl;
};

void print_linked_list(Node *head)
{
    cout << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_postion(Node *head, int position, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    cout << "Insert at position: " << position << endl;
}

void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert linked list" << endl;
        cout << "Option 2: Insert at position" << endl;
        cout << "Option 3: Print linked list" << endl;
        cout << "Option 4: Terminate" << endl;
        int position;
        cin >> position;

        if (position == 1)
        {
            cout << "Enter the value: ";
            int value;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (position == 2)
        {
            int position, value;
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter value: ";
            cin >> value;
            if (position == 0)
            {
                insert_at_head(head, value);
            }
            else
            {
                insert_at_postion(head, position, value);
            }
        }
        else if (position == 3)
        {
            print_linked_list(head);
        }
        else if (position == 4)
        {
            break;
        }
    }

    return 0;
}