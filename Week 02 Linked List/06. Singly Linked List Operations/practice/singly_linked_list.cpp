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
        cout << "Insert at head" << endl;
        return;
    }

    tail->next = new_node;
    tail = new_node;
    cout << "Insert at tail" << endl;
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
        cout << "Invalid position" << endl;
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

void delete_at_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head not found" << endl;
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
}

void delete_at_position(Node *&head, int position)
{

    Node *temp = head;
    if (position > linked_list_size(head) ||
        temp == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (position == 0)
    {
        delete_at_head(head);
    }
    else
    {
        for (int i = 1; i <= position - 1; i++)
        {
            temp = temp->next;
        }

        if (temp->next == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }

        Node *target_node = temp->next;
        temp->next = temp->next->next;
        delete target_node;
    }
}

void sort_linked_list(Node *&head, string sort_by)
{

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (sort_by == "asc")
            {
                if (i->value > j->value)
                {
                    swap(i->value, j->value);
                }
            }
            else if (sort_by == "dsc")
            {
                if (i->value < j->value)
                {
                    swap(i->value, j->value);
                }
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (value != -1)
    {
        cin >> value;
        input_linked_list(head, tail, value);
    }

    delete_at_position(head, 2);

    print_linked_list(head);

    return 0;
}