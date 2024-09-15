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
    Node a(10), b(20);

    a.next_node = &b;

    cout << (*a.next_node).value << endl;



return 0;
}