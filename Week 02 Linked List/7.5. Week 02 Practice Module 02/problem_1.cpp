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

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int value_1, value_2;
    while (value_1 != -1)
    {
        cin >> value_1;
        input_linked_list(head_1, tail_1, value_1);
    }
    while (value_2 != -1)
    {
        cin >> value_2;
        input_linked_list(head_2, tail_2, value_2);
    }
    if (linked_list_size(head_1) == linked_list_size(head_2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}