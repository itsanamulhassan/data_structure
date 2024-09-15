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

void input_linked_list(Node *&head, Node *&tail, int value)
{
    if (value == -1)
        return;
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
};

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

bool is_duplicate(Node *head)
{
    Node *temp = head;
    bool is_duplicate_available = false;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->value == temp->next->value)
        {
            is_duplicate_available = true;
            break;
        }
        temp = temp->next;
    }
    return is_duplicate_available;
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

    sort_linked_list(head, "asc");

    if (is_duplicate(head) == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}