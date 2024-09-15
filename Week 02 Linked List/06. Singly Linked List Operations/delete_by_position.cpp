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

void delete_by_postion(Node *head, int postion)
{
    Node *temp = head;
    for (int i = 1; i <= postion - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid input" << endl;
            return;
        }
    }

    if (temp->next == NULL)
    {
        cout << "Invalid input" << endl;
        return;
    }

    Node *target_node = temp->next;
    temp->next = temp->next->next;
    delete target_node;
}
void delete_at_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Invalid input" << endl;
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: insert at tail" << endl;
        cout << "Option 2: insert node at postion" << endl;
        cout << "Option 3: insert at head" << endl;
        cout << "Option 4: delete node by position" << endl;
        cout << "Option 5: delete head" << endl;
        cout << "Option 6: print linked list" << endl;
        cout << "Option 7: terminate" << endl;

        int option;
        cin >> option;

        if (option == 1)
        {
            cout << "Enter value: ";
            int value;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (option == 2)
        {
            int position, value;
            cout << "Enter postion: ";
            cin >> position;
            cout << "Enter value: ";
            cin >> value;
            if (position == 0)
            {
                insert_at_head(head, value);
            }
            else
            {
                insert_at_position(head, position, value);
            }
        }
        else if (option == 3)
        {
            cout << "Enter value: ";
            int value;
            cin >> value;
            insert_at_head(head, value);
        }
        else if (option == 4)
        {
            cout << "Enter position for deleting node: ";
            int position;
            cin >> position;
            if (position == 0)
            {
                delete_at_head(head);
            }
            else
            {
                delete_by_postion(head, position);
            }
        }
        else if (option == 5)
        {
            delete_at_head(head);
        }
        else if (option == 6)
        {
            print_linked_list(head);
        }
        else if (option == 7)
        {
            break;
        }
    }

    return 0;
}