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
        if (head == NULL)
        {
            return 0;
        }

        int top_value = tail->value;
        return top_value;
    }
    bool empty()
    {
        if (size_count == 0)
            return true;
        else
            return false;
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
        new_node->prev = tail;
        tail = new_node;
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
        if (head == NULL)
        {
            tail = NULL;
            delete delete_node;
            return;
        }
        head->prev = NULL;
        delete delete_node;
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
    my_stack stk;
    my_queue que;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stk.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        que.push(x);
    }

    bool flag = true;

    if (stk.size() != que.size())
    {
        flag = false;
    }

    while (!stk.empty() && !que.empty())
    {
        if (stk.top() != que.front())
        {
            flag = false;
            break;
        }
        stk.pop();
        que.pop();
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}