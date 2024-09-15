#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> my_stack;
    queue<int> my_queue;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        my_stack.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        my_queue.push(x);
    }

    bool flag = true;

    if (my_stack.size() != my_queue.size())
    {
        flag = false;
    }

    while (!my_stack.empty() && !my_queue.empty())
    {
        if (my_stack.top() != my_queue.front())
        {
            flag = false;
            break;
        }
        my_stack.pop();
        my_queue.pop();
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