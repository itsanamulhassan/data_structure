#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
}

bool check_palindrome(Node *head, Node *tail)
{
    Node *temp_head = head;
    Node *temp_tail = tail;

    bool flag = true;

    while (temp_head != NULL || temp_tail != NULL)
    {
        if (temp_head->value != temp_tail->value)
        {
            return flag = false;
        }

        temp_head = temp_head->next;
        temp_tail = temp_tail->prev;
    }

    return flag;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    if (check_palindrome(head, tail))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}