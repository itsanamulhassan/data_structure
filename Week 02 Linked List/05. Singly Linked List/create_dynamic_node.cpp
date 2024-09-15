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

   head->next_node = a;

    cout << head->next_node->value << endl;

return 0;
}