#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> my_stack_one;
    stack<int> my_stack_two;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        my_stack_one.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        my_stack_two.push(x);
    }

    bool flag = true;

    if (my_stack_one.size() != my_stack_two.size())
    {
        flag = false;
    }

    while (!my_stack_one.empty())
    {
        if (my_stack_one.top() != my_stack_two.top())
        {
            flag = false;
            break;
            ;
        }
        my_stack_one.pop();
        my_stack_two.pop();
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