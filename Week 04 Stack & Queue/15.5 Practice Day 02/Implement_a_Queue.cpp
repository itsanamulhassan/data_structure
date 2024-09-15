
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        return head == NULL;
    }
    void enqueue(int data)
    {
        Node *new_node = new Node(data);
        if (isEmpty())
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            Node *delete_node = head;
            int data = head->data;
            head = head->next;
            delete delete_node;
            return data;
        }
    }
    int front()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return head->data;
        }
    }
};