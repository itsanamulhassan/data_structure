/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    Node *my_stack;
    int size;

public:
    Stack()
    {
        my_stack = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return my_stack == NULL;
    }

    void push(int data)
    {
        Node *new_node = new Node(data);
        new_node->next = my_stack;
        my_stack = new_node;
        size++;
    }

    void pop()
    {
        if (!isEmpty())
        {
            Node *delete_node = my_stack;
            my_stack = my_stack->next;
            delete delete_node;
            size--;
        }
    }

    int getTop()
    {
        if (!isEmpty())
        {
            return my_stack->data;
        }
        else
        {
            return -1;
        }
    }
};