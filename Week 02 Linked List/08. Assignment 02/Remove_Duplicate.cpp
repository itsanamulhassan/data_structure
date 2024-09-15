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

void remove_duplicates(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }

    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *target = i;
        for (Node *j = i->next; j != NULL;)
        {
            if (i->value == j->value)
            {
                Node *temp = j;
                target->next = j->next;
                j = j->next;
                delete temp;
                if (target->next == NULL)
                {
                    tail = target;
                }
            }
            else
            {
                target = j;
                j = j->next;
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

    remove_duplicates(head, tail);

    print_linked_list(head);

    return 0;
}