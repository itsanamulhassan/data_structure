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

bool is_asc_sorted(Node *head)
{
    Node *temp = head;
    bool is_sorted = true;
    while (temp->next != NULL)
    {
        if (temp->value > temp->next->value)
        {
            is_sorted = false;
            break;
        }
        temp = temp->next;
    }
    return is_sorted;
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

    if (is_asc_sorted(head) == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}