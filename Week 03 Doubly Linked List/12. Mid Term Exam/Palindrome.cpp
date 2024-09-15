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

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

bool is_palindrome(Node *head, Node *tail)
{

    bool flag = true;
    if (head == NULL || tail == NULL)
    {
        flag = true;
    }

    Node *temp_head = head;
    Node *temp_tail = tail;

    while (temp_head != NULL && temp_tail != NULL && temp_head != temp_tail && temp_head->prev != temp_tail)
    {
        if (temp_head->value != temp_tail->value)
        {
            flag = false;
            break;
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
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        else
        {

            insert_at_tail(head, tail, value);
        }
    }

    bool palindrome = is_palindrome(head, tail);

    if (palindrome == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}