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

class my_queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int queue_size = 0;

    void push(int value)
    {
        queue_size++;
        Node *new_node = new Node(value);

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        tail = tail->next;
    }
    void pop()
    {
        queue_size--;
        if (head == NULL)
        {
            return;
        }
        Node *delete_node = head;

        head = head->next;
        delete delete_node;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        if (head == NULL)
        {
            return 0;
        }
        int front_value = head->value;

        return front_value;
    }
    int size()
    {
        return queue_size;
    }
    bool empty()
    {
        if (queue_size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    my_queue q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}