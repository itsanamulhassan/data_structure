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

void insert_at_tail(Node *&head, int value)
{
    Node *new_node = new Node(value);
    Node *temp = head;
    // IF THE HEAD IS TO BE NULL THEN NEW NODE WILL SET TO THE HEAD;
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    // INSERT NODE AT THE END OF THE LINKED LIST
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
}

void print_linked_list(Node *head)
{
    cout << "Linked list values: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print linked list" << endl;
        cout << "Option 1: Terminate" << endl;
        int option;
        cin >> option;

        if (option == 1)
        {
            cout << "Enter the value: ";
            int value;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (option == 2)
        {
            print_linked_list(head);
            cout << endl;
            cout << endl;
            cout << endl;
        }
        else if (option == 3)
        {
            break;
        }
    }

    return 0;
}