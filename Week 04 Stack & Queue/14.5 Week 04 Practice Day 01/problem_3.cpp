#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> my_stack;
    stack<int> copy_stack;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        my_stack.push(x);
    }

    while (!my_stack.empty())
    {
        copy_stack.push(my_stack.top());
        my_stack.pop();
    }

    while (!copy_stack.empty())
    {
        cout << copy_stack.top() << " ";
        copy_stack.pop();
    }

    return 0;
}
