#include <bits/stdc++.h>
using namespace std;

void reverse(queue<int> &my_queue, queue<int> &duplicate)
{
    if (my_queue.empty())
    {
        return;
    }

    int front_value = my_queue.front();
    my_queue.pop();

    reverse(my_queue, duplicate);
    duplicate.push(front_value);
}

int main()
{
    queue<int> my_queue;
    queue<int> duplicate;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        my_queue.push(x);
    }

    reverse(my_queue, duplicate);

    while (!duplicate.empty())
    {
        cout << duplicate.front() << " ";
        duplicate.pop();
    }

    return 0;
}