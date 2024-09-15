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
    int value_1, value_2;
    while (true)
    {
        cin >> value_1;
        if (value_1 == -1)
            break;
        insert_at_tail(head_1, tail_1, value_1);
    }

    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    while (true)
    {
        cin >> value_2;

        if (value_2 == -1)
            break;
        insert_at_tail(head_2, tail_2, value_2);
    }

    bool flag = true;
    Node *temp_1 = head_1;
    Node *temp_2 = head_2;
    while (temp_1 != NULL)
    {

        if (linked_list_size(temp_1) != linked_list_size(temp_2))
        {
            flag = false;
            break;
        }

        if (temp_1->value != temp_2->value)
        {
            flag = false;
            break;
        }
        temp_1 = temp_1->next;
        temp_2 = temp_2->next;
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