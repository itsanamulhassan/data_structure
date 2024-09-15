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

class my_stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int size_count = 0;

    void push(int value)
    {
        size_count++;
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

    void pop()
    {
        size_count--;
        Node *delete_node = tail;

        tail = tail->prev;

        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete delete_node;
    }
    int size()
    {
        return size_count;
    }
    int top()
    {
        if (tail != NULL)
        {
            return tail->value;
        }
    }
    bool empty()
    {
        if (size_count == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    my_stack values;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        values.push(value);
    }

    while (values.empty() == false)
    {
        cout << values.top() << " ";
        values.pop();
    }

    return 0;
}