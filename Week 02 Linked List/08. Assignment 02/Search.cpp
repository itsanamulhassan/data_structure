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

void insert_at_tail(Node *&head, Node *&tail, int value)
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

int get_node_position(Node *head, int X)
{
    Node *temp = head;
    int count = 0;
    bool is_x_exist = false;

    while (temp != NULL)
    {
        count++;
        if (temp->value == X)
        {
            is_x_exist = true;
            break;
        }
        temp = temp->next;
    }

    if (is_x_exist == true)
    {
        return count == 1 ? 0 : count - 1;
    }
    else
    {
        return -1;
    }
}

int main()
{

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int value;
        while (true)
        {
            cin >> value;
            if (value == -1)
                break;
            insert_at_tail(head, tail, value);
        }

        int X;
        cin >> X;

        cout << get_node_position(head, X) << endl;
    }

    return 0;
}