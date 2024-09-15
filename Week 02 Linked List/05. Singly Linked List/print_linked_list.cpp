#include <bits/stdc++.h>
using namespace std;

class Node {
    public: 
    int value;
    Node * next_node;
    Node(int value){
        this->value = value;
        this->next_node = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next_node = a;
    a->next_node = b;
    b->next_node = c;
    c->next_node = d;

    Node *temp_head = head;

    while(temp_head != NULL){
        cout << temp_head->value << endl;
        temp_head = temp_head->next_node;
    }
temp_head = head;
 while(temp_head != NULL){
        cout << temp_head->value << endl;
        temp_head = temp_head->next_node;
    }

  
    // cout << head->value << endl;
    // cout << head->next_node->value << endl;
    // cout << head->next_node->next_node->value << endl;
    // cout << head->next_node->next_node->next_node->value << endl;
    // cout << head->next_node->next_node->next_node->next_node->value << endl;

    

return 0;
}