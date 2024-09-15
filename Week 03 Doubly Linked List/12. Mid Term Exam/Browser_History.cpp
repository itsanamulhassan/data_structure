#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string value;
    Node *next;
    Node *prev;
    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string value)
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string value;
    while (true)
    {
        cin >> value;
        if (value == "end")
            break;

        insert_at_tail(head, tail, value);
    }
    int query;
    cin >> query;
    Node *target_node = head;

    for (int i = 0; i <= query; i++)
    {
        Node *temp_head = head;
        string command;
        cin >> command;

        if (command == "visit")
        {
            cin >> command;
            bool flag = false;
            while (temp_head != NULL)
            {
                if (temp_head->value == command)
                {
                    cout << temp_head->value << endl;
                    flag = true;
                    target_node = temp_head;
                    break;
                }
                temp_head = temp_head->next;
            }
            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (target_node && target_node->next != NULL)
            {
                cout << target_node->next->value << endl;
                target_node = target_node->next;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (target_node && target_node->prev != NULL)
            {
                cout << target_node->prev->value << endl;
                target_node = target_node->prev;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}