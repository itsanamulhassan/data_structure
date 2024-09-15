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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *head)
{
    Node *temp = head;

    if (temp == NULL)
    {
        return;
    }
    print_reverse(temp->next);
    cout << temp->value << " ";
}
void reverse_linked_list(Node *&head, Node *current)
{
    if (current == NULL || current->next == NULL)
    {
        head = current;
        return;
    }
    reverse_linked_list(head, current->next);

    current->next->next = current;
    current->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    // print_reverse(head);
    reverse_linked_list(head, head);

    print_linked_list(head);

    return 0;
}