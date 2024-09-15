#include <bits/stdc++.h>
using namespace std;

class my_queue
{
public:
    list<int> queue_numbers;
    void push(int value)
    {
        queue_numbers.push_back(value);
    }
    void pop()
    {
        queue_numbers.pop_front();
    }
    int front()
    {
        return queue_numbers.front();
    }
    int size()
    {
        return queue_numbers.size();
    }
    bool empty()
    {
        return queue_numbers.empty();
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